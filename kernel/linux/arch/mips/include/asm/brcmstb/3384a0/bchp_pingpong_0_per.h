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
 * Date:           Generated on         Wed Nov 14 03:20:39 2012
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

#ifndef BCHP_PINGPONG_0_PER_H__
#define BCHP_PINGPONG_0_PER_H__

/***************************************************************************
 *PINGPONG_0_PER - Ping-Pong #0 register bank PER
 ***************************************************************************/
#define BCHP_PINGPONG_0_PER_COMMAND              0x14e01080 /* Command Register */
#define BCHP_PINGPONG_0_PER_STATUS               0x14e01084 /* Ping-pong Status */
#define BCHP_PINGPONG_0_PER_FIFO_STATUS          0x14e01088 /* Ping-pong FIFO Status */
#define BCHP_PINGPONG_0_PER_CONTROL              0x14e0108c /* Ping-pong Control */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD1       0x14e01090 /* Reserved */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD2       0x14e01094 /* Reserved */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD3       0x14e01098 /* Reserved */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD4       0x14e0109c /* Reserved */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD5       0x14e010a0 /* Reserved */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD6       0x14e010a4 /* Reserved */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD7       0x14e010a8 /* Reserved */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD8       0x14e010ac /* Reserved */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD9       0x14e010b0 /* Reserved */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD10      0x14e010b4 /* Reserved */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD11      0x14e010b8 /* Reserved */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD12      0x14e010bc /* Reserved */

/***************************************************************************
 *COMMAND - Command Register
 ***************************************************************************/
/* PINGPONG_0_PER :: COMMAND :: reserved0 [31:15] */
#define BCHP_PINGPONG_0_PER_COMMAND_reserved0_MASK                 0xffff8000
#define BCHP_PINGPONG_0_PER_COMMAND_reserved0_SHIFT                15

/* PINGPONG_0_PER :: COMMAND :: SS_NUM [14:12] */
#define BCHP_PINGPONG_0_PER_COMMAND_SS_NUM_MASK                    0x00007000
#define BCHP_PINGPONG_0_PER_COMMAND_SS_NUM_SHIFT                   12
#define BCHP_PINGPONG_0_PER_COMMAND_SS_NUM_DEFAULT                 0x00000000

/* PINGPONG_0_PER :: COMMAND :: reserved1 [11:11] */
#define BCHP_PINGPONG_0_PER_COMMAND_reserved1_MASK                 0x00000800
#define BCHP_PINGPONG_0_PER_COMMAND_reserved1_SHIFT                11

/* PINGPONG_0_PER :: COMMAND :: PROFILE_NUM [10:08] */
#define BCHP_PINGPONG_0_PER_COMMAND_PROFILE_NUM_MASK               0x00000700
#define BCHP_PINGPONG_0_PER_COMMAND_PROFILE_NUM_SHIFT              8
#define BCHP_PINGPONG_0_PER_COMMAND_PROFILE_NUM_DEFAULT            0x00000000

/* PINGPONG_0_PER :: COMMAND :: reserved2 [07:07] */
#define BCHP_PINGPONG_0_PER_COMMAND_reserved2_MASK                 0x00000080
#define BCHP_PINGPONG_0_PER_COMMAND_reserved2_SHIFT                7

/* PINGPONG_0_PER :: COMMAND :: TRIGGER_NUM [06:04] */
#define BCHP_PINGPONG_0_PER_COMMAND_TRIGGER_NUM_MASK               0x00000070
#define BCHP_PINGPONG_0_PER_COMMAND_TRIGGER_NUM_SHIFT              4
#define BCHP_PINGPONG_0_PER_COMMAND_TRIGGER_NUM_DEFAULT            0x00000000

/* PINGPONG_0_PER :: COMMAND :: reserved3 [03:03] */
#define BCHP_PINGPONG_0_PER_COMMAND_reserved3_MASK                 0x00000008
#define BCHP_PINGPONG_0_PER_COMMAND_reserved3_SHIFT                3

/* PINGPONG_0_PER :: COMMAND :: COMMAND_VALUE [02:00] */
#define BCHP_PINGPONG_0_PER_COMMAND_COMMAND_VALUE_MASK             0x00000007
#define BCHP_PINGPONG_0_PER_COMMAND_COMMAND_VALUE_SHIFT            0
#define BCHP_PINGPONG_0_PER_COMMAND_COMMAND_VALUE_DEFAULT          0x00000000
#define BCHP_PINGPONG_0_PER_COMMAND_COMMAND_VALUE_NOOP             0
#define BCHP_PINGPONG_0_PER_COMMAND_COMMAND_VALUE_START_NOW        1
#define BCHP_PINGPONG_0_PER_COMMAND_COMMAND_VALUE_START_TRIGGER    2
#define BCHP_PINGPONG_0_PER_COMMAND_COMMAND_VALUE_HALT             3
#define BCHP_PINGPONG_0_PER_COMMAND_COMMAND_VALUE_FLUSH            4

/***************************************************************************
 *STATUS - Ping-pong Status
 ***************************************************************************/
/* PINGPONG_0_PER :: STATUS :: reserved0 [31:28] */
#define BCHP_PINGPONG_0_PER_STATUS_reserved0_MASK                  0xf0000000
#define BCHP_PINGPONG_0_PER_STATUS_reserved0_SHIFT                 28

/* PINGPONG_0_PER :: STATUS :: ERROR_BYTE_OFFSET [27:16] */
#define BCHP_PINGPONG_0_PER_STATUS_ERROR_BYTE_OFFSET_MASK          0x0fff0000
#define BCHP_PINGPONG_0_PER_STATUS_ERROR_BYTE_OFFSET_SHIFT         16
#define BCHP_PINGPONG_0_PER_STATUS_ERROR_BYTE_OFFSET_DEFAULT       0x00000000

/* PINGPONG_0_PER :: STATUS :: reserved1 [15:03] */
#define BCHP_PINGPONG_0_PER_STATUS_reserved1_MASK                  0x0000fff8
#define BCHP_PINGPONG_0_PER_STATUS_reserved1_SHIFT                 3

/* PINGPONG_0_PER :: STATUS :: WAITING_FOR_TRIGGER [02:02] */
#define BCHP_PINGPONG_0_PER_STATUS_WAITING_FOR_TRIGGER_MASK        0x00000004
#define BCHP_PINGPONG_0_PER_STATUS_WAITING_FOR_TRIGGER_SHIFT       2
#define BCHP_PINGPONG_0_PER_STATUS_WAITING_FOR_TRIGGER_DEFAULT     0x00000000

/* PINGPONG_0_PER :: STATUS :: SOURCE_BUSY [01:01] */
#define BCHP_PINGPONG_0_PER_STATUS_SOURCE_BUSY_MASK                0x00000002
#define BCHP_PINGPONG_0_PER_STATUS_SOURCE_BUSY_SHIFT               1
#define BCHP_PINGPONG_0_PER_STATUS_SOURCE_BUSY_DEFAULT             0x00000000

/* PINGPONG_0_PER :: STATUS :: SOURCE_GNT [00:00] */
#define BCHP_PINGPONG_0_PER_STATUS_SOURCE_GNT_MASK                 0x00000001
#define BCHP_PINGPONG_0_PER_STATUS_SOURCE_GNT_SHIFT                0
#define BCHP_PINGPONG_0_PER_STATUS_SOURCE_GNT_DEFAULT              0x00000000

/***************************************************************************
 *FIFO_STATUS - Ping-pong FIFO Status
 ***************************************************************************/
/* PINGPONG_0_PER :: FIFO_STATUS :: MSG_EMPTY [31:31] */
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_MSG_EMPTY_MASK             0x80000000
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_MSG_EMPTY_SHIFT            31
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_MSG_EMPTY_DEFAULT          0x00000001

/* PINGPONG_0_PER :: FIFO_STATUS :: MSG_FULL [30:30] */
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_MSG_FULL_MASK              0x40000000
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_MSG_FULL_SHIFT             30
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_MSG_FULL_DEFAULT           0x00000000

/* PINGPONG_0_PER :: FIFO_STATUS :: reserved0 [29:26] */
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_reserved0_MASK             0x3c000000
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_reserved0_SHIFT            26

/* PINGPONG_0_PER :: FIFO_STATUS :: MSG_TAIL [25:16] */
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_MSG_TAIL_MASK              0x03ff0000
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_MSG_TAIL_SHIFT             16
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_MSG_TAIL_DEFAULT           0x00000000

/* PINGPONG_0_PER :: FIFO_STATUS :: RX_EMPTY [15:15] */
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_RX_EMPTY_MASK              0x00008000
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_RX_EMPTY_SHIFT             15
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_RX_EMPTY_DEFAULT           0x00000001

/* PINGPONG_0_PER :: FIFO_STATUS :: RX_FULL [14:14] */
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_RX_FULL_MASK               0x00004000
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_RX_FULL_SHIFT              14
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_RX_FULL_DEFAULT            0x00000000

/* PINGPONG_0_PER :: FIFO_STATUS :: reserved1 [13:10] */
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_reserved1_MASK             0x00003c00
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_reserved1_SHIFT            10

/* PINGPONG_0_PER :: FIFO_STATUS :: RX_TAIL [09:00] */
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_RX_TAIL_MASK               0x000003ff
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_RX_TAIL_SHIFT              0
#define BCHP_PINGPONG_0_PER_FIFO_STATUS_RX_TAIL_DEFAULT            0x00000000

/***************************************************************************
 *CONTROL - Ping-pong Control
 ***************************************************************************/
/* PINGPONG_0_PER :: CONTROL :: reserved0 [31:02] */
#define BCHP_PINGPONG_0_PER_CONTROL_reserved0_MASK                 0xfffffffc
#define BCHP_PINGPONG_0_PER_CONTROL_reserved0_SHIFT                2

/* PINGPONG_0_PER :: CONTROL :: ALLOW_MSGFIFO_READS [01:01] */
#define BCHP_PINGPONG_0_PER_CONTROL_ALLOW_MSGFIFO_READS_MASK       0x00000002
#define BCHP_PINGPONG_0_PER_CONTROL_ALLOW_MSGFIFO_READS_SHIFT      1
#define BCHP_PINGPONG_0_PER_CONTROL_ALLOW_MSGFIFO_READS_DEFAULT    0x00000000

/* PINGPONG_0_PER :: CONTROL :: reserved1 [00:00] */
#define BCHP_PINGPONG_0_PER_CONTROL_reserved1_MASK                 0x00000001
#define BCHP_PINGPONG_0_PER_CONTROL_reserved1_SHIFT                0

/***************************************************************************
 *RESERVED_WORD1 - Reserved
 ***************************************************************************/
/* PINGPONG_0_PER :: RESERVED_WORD1 :: reserved0 [31:00] */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD1_reserved0_MASK          0xffffffff
#define BCHP_PINGPONG_0_PER_RESERVED_WORD1_reserved0_SHIFT         0

/***************************************************************************
 *RESERVED_WORD2 - Reserved
 ***************************************************************************/
/* PINGPONG_0_PER :: RESERVED_WORD2 :: reserved0 [31:00] */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD2_reserved0_MASK          0xffffffff
#define BCHP_PINGPONG_0_PER_RESERVED_WORD2_reserved0_SHIFT         0

/***************************************************************************
 *RESERVED_WORD3 - Reserved
 ***************************************************************************/
/* PINGPONG_0_PER :: RESERVED_WORD3 :: reserved0 [31:00] */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD3_reserved0_MASK          0xffffffff
#define BCHP_PINGPONG_0_PER_RESERVED_WORD3_reserved0_SHIFT         0

/***************************************************************************
 *RESERVED_WORD4 - Reserved
 ***************************************************************************/
/* PINGPONG_0_PER :: RESERVED_WORD4 :: reserved0 [31:00] */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD4_reserved0_MASK          0xffffffff
#define BCHP_PINGPONG_0_PER_RESERVED_WORD4_reserved0_SHIFT         0

/***************************************************************************
 *RESERVED_WORD5 - Reserved
 ***************************************************************************/
/* PINGPONG_0_PER :: RESERVED_WORD5 :: reserved0 [31:00] */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD5_reserved0_MASK          0xffffffff
#define BCHP_PINGPONG_0_PER_RESERVED_WORD5_reserved0_SHIFT         0

/***************************************************************************
 *RESERVED_WORD6 - Reserved
 ***************************************************************************/
/* PINGPONG_0_PER :: RESERVED_WORD6 :: reserved0 [31:00] */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD6_reserved0_MASK          0xffffffff
#define BCHP_PINGPONG_0_PER_RESERVED_WORD6_reserved0_SHIFT         0

/***************************************************************************
 *RESERVED_WORD7 - Reserved
 ***************************************************************************/
/* PINGPONG_0_PER :: RESERVED_WORD7 :: reserved0 [31:00] */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD7_reserved0_MASK          0xffffffff
#define BCHP_PINGPONG_0_PER_RESERVED_WORD7_reserved0_SHIFT         0

/***************************************************************************
 *RESERVED_WORD8 - Reserved
 ***************************************************************************/
/* PINGPONG_0_PER :: RESERVED_WORD8 :: reserved0 [31:00] */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD8_reserved0_MASK          0xffffffff
#define BCHP_PINGPONG_0_PER_RESERVED_WORD8_reserved0_SHIFT         0

/***************************************************************************
 *RESERVED_WORD9 - Reserved
 ***************************************************************************/
/* PINGPONG_0_PER :: RESERVED_WORD9 :: reserved0 [31:00] */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD9_reserved0_MASK          0xffffffff
#define BCHP_PINGPONG_0_PER_RESERVED_WORD9_reserved0_SHIFT         0

/***************************************************************************
 *RESERVED_WORD10 - Reserved
 ***************************************************************************/
/* PINGPONG_0_PER :: RESERVED_WORD10 :: reserved0 [31:00] */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD10_reserved0_MASK         0xffffffff
#define BCHP_PINGPONG_0_PER_RESERVED_WORD10_reserved0_SHIFT        0

/***************************************************************************
 *RESERVED_WORD11 - Reserved
 ***************************************************************************/
/* PINGPONG_0_PER :: RESERVED_WORD11 :: reserved0 [31:00] */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD11_reserved0_MASK         0xffffffff
#define BCHP_PINGPONG_0_PER_RESERVED_WORD11_reserved0_SHIFT        0

/***************************************************************************
 *RESERVED_WORD12 - Reserved
 ***************************************************************************/
/* PINGPONG_0_PER :: RESERVED_WORD12 :: reserved0 [31:00] */
#define BCHP_PINGPONG_0_PER_RESERVED_WORD12_reserved0_MASK         0xffffffff
#define BCHP_PINGPONG_0_PER_RESERVED_WORD12_reserved0_SHIFT        0

#endif /* #ifndef BCHP_PINGPONG_0_PER_H__ */

/* End of File */
