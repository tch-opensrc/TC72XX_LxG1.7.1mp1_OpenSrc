/***************************************************************************
 *     Copyright (c) 1999-2012, Broadcom Corporation
 *     All Rights Reserved
 *     Confidential Property of Broadcom Corporation
 *
 *
 * THIS SOFTWARE MAY ONLY BE USED SUBJECT TO AN EXECUTED SOFTWARE LICENSE
 * AGREEMENT  BETWEEN THE USER AND BROADCOM.  YOU HAVE NO RIGHT TO USE OR
 * EXPLOIT THIS MATERIAL EXCEPT SUBJECT TO THE TERMS OF SUCH AN AGREEMENT.
 *
 * $brcm_Workfile: $
 * $brcm_Revision: $
 * $brcm_Date: $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Wed Nov 14 03:20:38 2012
 *                 MD5 Checksum         d41d8cd98f00b204e9800998ecf8427e
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: $
 *
 ***************************************************************************/

#ifndef BCHP_DQMQSTS_GB_H__
#define BCHP_DQMQSTS_GB_H__

/***************************************************************************
 *DQMQSTS_GB
 ***************************************************************************/

/***************************************************************************
 *STS%i - Queue Status Register
 ***************************************************************************/
#define BCHP_DQMQSTS_GB_STSi_ARRAY_BASE                            0x104b0b00
#define BCHP_DQMQSTS_GB_STSi_ARRAY_START                           0
#define BCHP_DQMQSTS_GB_STSi_ARRAY_END                             31
#define BCHP_DQMQSTS_GB_STSi_ARRAY_ELEMENT_SIZE                    32

/***************************************************************************
 *STS%i - Queue Status Register
 ***************************************************************************/
/* DQMQSTS_GB :: STSi :: reserved0 [31:14] */
#define BCHP_DQMQSTS_GB_STSi_reserved0_MASK                        0xffffc000
#define BCHP_DQMQSTS_GB_STSi_reserved0_SHIFT                       14

/* DQMQSTS_GB :: STSi :: Q_AVL_TKN_SPACE [13:00] */
#define BCHP_DQMQSTS_GB_STSi_Q_AVL_TKN_SPACE_MASK                  0x00003fff
#define BCHP_DQMQSTS_GB_STSi_Q_AVL_TKN_SPACE_SHIFT                 0
#define BCHP_DQMQSTS_GB_STSi_Q_AVL_TKN_SPACE_DEFAULT               0x00000000


#endif /* #ifndef BCHP_DQMQSTS_GB_H__ */

/* End of File */