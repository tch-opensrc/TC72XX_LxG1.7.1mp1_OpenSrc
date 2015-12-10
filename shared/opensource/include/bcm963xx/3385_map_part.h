/*****************************************************************************
 *
 * Copyright(c) 2007-2008 Broadcom Corporation
 *
 * This program is the proprietary software of Broadcom Corporation and/or
 * its licensors, and may only be used, duplicated, modified or distributed
 * pursuant to the terms and conditions of a separate, written license
 * agreement executed between you and Broadcom (an "Authorized License").
 * Except as set forth in an Authorized License, Broadcom grants no license
 * (express or implied), right to use, or waiver of any kind with respect to
 * the Software, and Broadcom expressly reserves all rights in and to the
 * Software and all intellectual property rights therein.  IF YOU HAVE NO
 * AUTHORIZED LICENSE, THEN YOU HAVE NO RIGHT TO USE THIS SOFTWARE IN ANY WAY,
 * AND SHOULD IMMEDIATELY NOTIFY BROADCOM AND DISCONTINUE ALL USE OF THE
 * SOFTWARE.  
 *
 * Except as expressly set forth in the Authorized License,
 *
 * 1.     This program, including its structure, sequence and organization,
 * constitutes the valuable trade secrets of Broadcom, and you shall use all
 * reasonable efforts to protect the confidentiality thereof, and to use this
 * information only in connection with your use of Broadcom integrated circuit
 * products.
 *
 * 2.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED
 * "AS IS" AND WITH ALL FAULTS AND BROADCOM MAKES NO PROMISES, REPRESENTATIONS
 * OR WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY, OR OTHERWISE, WITH
 * RESPECT TO THE SOFTWARE.  BROADCOM SPECIFICALLY DISCLAIMS ANY AND ALL
 * IMPLIED WARRANTIES OF TITLE, MERCHANTABILITY, NONINFRINGEMENT, FITNESS FOR
 * A PARTICULAR PURPOSE, LACK OF VIRUSES, ACCURACY OR COMPLETENESS, QUIET
 * ENJOYMENT, QUIET POSSESSION OR CORRESPONDENCE TO DESCRIPTION. YOU ASSUME
 * THE ENTIRE RISK ARISING OUT OF USE OR PERFORMANCE OF THE SOFTWARE.
 *
 * 3.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL BROADCOM
 * OR ITS LICENSORS BE LIABLE FOR (i) CONSEQUENTIAL, INCIDENTAL, SPECIAL,
 * INDIRECT, OR EXEMPLARY DAMAGES WHATSOEVER ARISING OUT OF OR IN ANY WAY
 * RELATING TO YOUR USE OF OR INABILITY TO USE THE SOFTWARE EVEN IF BROADCOM
 * HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES; OR (ii) ANY AMOUNT IN
 * EXCESS OF THE AMOUNT ACTUALLY PAID FOR THE SOFTWARE ITSELF OR U.S. $1,
 * WHICHEVER IS GREATER. THESE LIMITATIONS SHALL APPLY NOTWITHSTANDING ANY
 * FAILURE OF ESSENTIAL PURPOSE OF ANY LIMITED REMEDY.
 *
 *****************************************************************************
 *  $Id$
 *
 *  Filename:       3385_map.h
 *  Author:         Peter Sulc
 *  Creation Date:  10/02/13
 *
 *****************************************************************************
 *  Description:
 *      This file is for the uart driver
 *
 ****************************************************************************/

#ifndef __3384_MAP_PART_H
#define __3384_MAP_PART_H

#include "bcmtypes.h"

// ------------------- Physical Memory Map -----------------------------------

#define UART_BASE0   0xd3c00500   // uart registers
#define UART_BASE1   0xd3c00520   // uart registers
#define UART_BASE2   0xd3c00540   // uart registers
#define UART_BASE    UART_BASE1


// macro to convert logical data addresses to physical
// DMA hardware must see physical address
#define LtoP( x ) ( (uint32)x & 0x1fffffff )
#define PtoL( x ) ( LtoP(x) | 0xa0000000 )

typedef struct Uart
{
    byte    unused0;
    byte    control;
        #define BRGEN           (1<<7)
        #define TXEN            (1<<6)
        #define RXEN            (1<<5)
        #define LOOPBK          (1<<4)
        #define TXPARITYEN      (1<<3)
        #define TXPARITYEVEN    (1<<2)
        #define RXPARITYEN      (1<<1)
        #define RXPARITYEVEN    (1<<0)

    byte    config;
        #define XMITBREAK   0x40
        #define BITS5SYM    0x00
        #define BITS6SYM    0x10
        #define BITS7SYM    0x20
        #define BITS8SYM    0x30
        // 4 low bits are STOP bits/char in 1/8 bit-time intervals.  Zero
        // represents 1/8 stop bit interval.  Fifteen represents 2 stop bits.
        #define ONESTOP     0x07
        #define TWOSTOP     0x0f

    byte    fifoctl;
        #define  RSTTXFIFOS  0x80
        #define  RSTRXFIFOS  0x40
        #define  RSTTXDN     0x20
        // 5-bit TimeoutCnt is in low bits of this register.
        //  This count represents the number of character
        //  idle times before setting receive Irq when below threshold

    // When we divide SysClk/2/(1+baudword) we should get 32*bit-rate
    uint32  baudword;

    // Read-only fifo depth
    byte    txf_levl;
    byte    rxf_levl;

    // Upper 4-bits are TxThresh, Lower are RxThresh.  Irq can be asserted
    //   when rxf_level > RxThresh and/or txf_level < TxThresh
    byte    fifocfg;

    // Set value of DTR & RTS if bits are enabled to GPIO_o
    byte    prog_out;
        #define UART_DTR_OUT    0x01
        #define UART_RTS_OUT    0x02

    byte    unused1;

    // Low 4-bits, set corr bit to 1 to detect irq on rising AND falling
    // edges for corresponding GPIO_if enabled (edge insensitive)
    byte    DeltaIPEdgeNoSense;

    // Upper 4 bits: 1 for posedge sense, 0 for negedge sense if
    //   not configured for edge insensitive (see above)
    // Lower 4 bits: Mask to enable change detection IRQ for corresponding
    //  GPIO_i
    byte    DeltaIPConfig_Mask;

    // Upper 4 bits show which bits have changed (may set IRQ).
    //  read automatically clears bit
    // Lower 4 bits are actual status
    byte    DeltaIP_SyncIP;


    uint16  intMask;
    uint16  intStatus;
        #define  TXCHARDONE  (1<<15)
        #define  RXBRK       (1<<14)
        #define  RXPARERR    (1<<13)
        #define  RXFRAMERR   (1<<12)
        #define  RXFIFONE    (1<<11)
        #define  RXFIFOTHOLD (1<<10)
        #define  RXFIFOFULL  (1<< 9)
        #define  RXTIMEOUT   (1<< 8)
        #define  RXOVFERR    (1<< 7)
        #define  RXUNDERR    (1<< 6)
        #define  TXFIFOEMT   (1<< 5)
        #define  TXREADLATCH (1<< 4)
        #define  TXFIFOTHOLD (1<< 3)
        #define  TXOVFERR    (1<< 2)
        #define  TXUNDERR    (1<< 1)
        #define  DELTAIP     (1<< 0)

    uint16  unused2;

    // Write to TX, Read from RX.  Bits 11:8 are BRK,PAR,FRM errors
    uint16  Data;

} Uart;

#define UART0 ((volatile Uart * const) UART_BASE)
#define THOWART ((volatile Uart * const) UART_BASE)

#endif
