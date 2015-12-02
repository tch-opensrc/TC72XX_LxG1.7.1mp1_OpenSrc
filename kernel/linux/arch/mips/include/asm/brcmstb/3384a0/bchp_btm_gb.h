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

#ifndef BCHP_BTM_GB_H__
#define BCHP_BTM_GB_H__

/***************************************************************************
 *BTM_GB
 ***************************************************************************/
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_0          0x104b0200 /* Buffer Allocation/Free Pool 0 */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_0             0x104b0204 /* Freepool Allocation/Free Pool 0 */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0         0x104b0208 /* Freepool Allocation/Free Control Pool 0 */
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_1          0x104b020c /* Buffer Allocation/Free Pool 1 */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_1             0x104b0210 /* Freepool Allocation/Free Pool 1 */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1         0x104b0214 /* Freepool Allocation/Free Control Pool 1 */
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_2          0x104b0218 /* Buffer Allocation/Free Pool 2 */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_2             0x104b021c /* Freepool Allocation/Free Pool 2 */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2         0x104b0220 /* Freepool Allocation/Free Control Pool 2 */
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_3          0x104b0224 /* Buffer Allocation/Free Pool 3 */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_3             0x104b0228 /* Freepool Allocation/Free Pool 3 */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3         0x104b022c /* Freepool Allocation/Free Control Pool 3 */
#define BCHP_BTM_GB_FPM_BUFFER_BASE              0x104b0230 /* FPM Buffer Base Address */
#define BCHP_BTM_GB_FPM_BUFFER_SIZE              0x104b0234 /* FPM Buffer Size */
#define BCHP_BTM_GB_FPM_FREE_THRESH              0x104b0238 /* FPM Free Threshold */
#define BCHP_BTM_GB_LAN_MSG_MAC_ID               0x104b023c /* LAN MSG_ID and MAC_ID */

/***************************************************************************
 *BUFFER_ALLOC_FREE_0 - Buffer Allocation/Free Pool 0
 ***************************************************************************/
/* BTM_GB :: BUFFER_ALLOC_FREE_0 :: Buffer_Ptr [31:00] */
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_0_Buffer_Ptr_MASK            0xffffffff
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_0_Buffer_Ptr_SHIFT           0
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_0_Buffer_Ptr_DEFAULT         0x00000000

/***************************************************************************
 *FPM_ALLOC_FREE_0 - Freepool Allocation/Free Pool 0
 ***************************************************************************/
/* BTM_GB :: FPM_ALLOC_FREE_0 :: FPM_Addr [31:00] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_0_FPM_Addr_MASK                 0xffffffff
#define BCHP_BTM_GB_FPM_ALLOC_FREE_0_FPM_Addr_SHIFT                0
#define BCHP_BTM_GB_FPM_ALLOC_FREE_0_FPM_Addr_DEFAULT              0x00000000

/***************************************************************************
 *FPM_ALLOC_FREE_CTL_0 - Freepool Allocation/Free Control Pool 0
 ***************************************************************************/
/* BTM_GB :: FPM_ALLOC_FREE_CTL_0 :: BTM_ENA [31:31] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_BTM_ENA_MASK              0x80000000
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_BTM_ENA_SHIFT             31
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_BTM_ENA_DEFAULT           0x00000000

/* BTM_GB :: FPM_ALLOC_FREE_CTL_0 :: reserved0 [30:17] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_reserved0_MASK            0x7ffe0000
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_reserved0_SHIFT           17

/* BTM_GB :: FPM_ALLOC_FREE_CTL_0 :: CURR_DEPTH [16:12] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_CURR_DEPTH_MASK           0x0001f000
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_CURR_DEPTH_SHIFT          12

/* BTM_GB :: FPM_ALLOC_FREE_CTL_0 :: POOL_SIZE [11:10] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_POOL_SIZE_MASK            0x00000c00
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_POOL_SIZE_SHIFT           10
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_POOL_SIZE_DEFAULT         0x00000000

/* BTM_GB :: FPM_ALLOC_FREE_CTL_0 :: MAX_PREFETCH [09:05] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_MAX_PREFETCH_MASK         0x000003e0
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_MAX_PREFETCH_SHIFT        5
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_MAX_PREFETCH_DEFAULT      0x00000000

/* BTM_GB :: FPM_ALLOC_FREE_CTL_0 :: PREFETCH_THRESHOLD [04:00] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_PREFETCH_THRESHOLD_MASK   0x0000001f
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_PREFETCH_THRESHOLD_SHIFT  0
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_0_PREFETCH_THRESHOLD_DEFAULT 0x00000000

/***************************************************************************
 *BUFFER_ALLOC_FREE_1 - Buffer Allocation/Free Pool 1
 ***************************************************************************/
/* BTM_GB :: BUFFER_ALLOC_FREE_1 :: Buffer_Ptr [31:00] */
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_1_Buffer_Ptr_MASK            0xffffffff
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_1_Buffer_Ptr_SHIFT           0
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_1_Buffer_Ptr_DEFAULT         0x00000000

/***************************************************************************
 *FPM_ALLOC_FREE_1 - Freepool Allocation/Free Pool 1
 ***************************************************************************/
/* BTM_GB :: FPM_ALLOC_FREE_1 :: FPM_Addr [31:00] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_1_FPM_Addr_MASK                 0xffffffff
#define BCHP_BTM_GB_FPM_ALLOC_FREE_1_FPM_Addr_SHIFT                0
#define BCHP_BTM_GB_FPM_ALLOC_FREE_1_FPM_Addr_DEFAULT              0x00000000

/***************************************************************************
 *FPM_ALLOC_FREE_CTL_1 - Freepool Allocation/Free Control Pool 1
 ***************************************************************************/
/* BTM_GB :: FPM_ALLOC_FREE_CTL_1 :: BTM_ENA [31:31] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_BTM_ENA_MASK              0x80000000
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_BTM_ENA_SHIFT             31
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_BTM_ENA_DEFAULT           0x00000000

/* BTM_GB :: FPM_ALLOC_FREE_CTL_1 :: reserved0 [30:17] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_reserved0_MASK            0x7ffe0000
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_reserved0_SHIFT           17

/* BTM_GB :: FPM_ALLOC_FREE_CTL_1 :: CURR_DEPTH [16:12] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_CURR_DEPTH_MASK           0x0001f000
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_CURR_DEPTH_SHIFT          12

/* BTM_GB :: FPM_ALLOC_FREE_CTL_1 :: POOL_SIZE [11:10] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_POOL_SIZE_MASK            0x00000c00
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_POOL_SIZE_SHIFT           10
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_POOL_SIZE_DEFAULT         0x00000000

/* BTM_GB :: FPM_ALLOC_FREE_CTL_1 :: MAX_PREFETCH [09:05] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_MAX_PREFETCH_MASK         0x000003e0
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_MAX_PREFETCH_SHIFT        5
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_MAX_PREFETCH_DEFAULT      0x00000000

/* BTM_GB :: FPM_ALLOC_FREE_CTL_1 :: PREFETCH_THRESHOLD [04:00] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_PREFETCH_THRESHOLD_MASK   0x0000001f
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_PREFETCH_THRESHOLD_SHIFT  0
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_1_PREFETCH_THRESHOLD_DEFAULT 0x00000000

/***************************************************************************
 *BUFFER_ALLOC_FREE_2 - Buffer Allocation/Free Pool 2
 ***************************************************************************/
/* BTM_GB :: BUFFER_ALLOC_FREE_2 :: Buffer_Ptr [31:00] */
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_2_Buffer_Ptr_MASK            0xffffffff
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_2_Buffer_Ptr_SHIFT           0
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_2_Buffer_Ptr_DEFAULT         0x00000000

/***************************************************************************
 *FPM_ALLOC_FREE_2 - Freepool Allocation/Free Pool 2
 ***************************************************************************/
/* BTM_GB :: FPM_ALLOC_FREE_2 :: FPM_Addr [31:00] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_2_FPM_Addr_MASK                 0xffffffff
#define BCHP_BTM_GB_FPM_ALLOC_FREE_2_FPM_Addr_SHIFT                0
#define BCHP_BTM_GB_FPM_ALLOC_FREE_2_FPM_Addr_DEFAULT              0x00000000

/***************************************************************************
 *FPM_ALLOC_FREE_CTL_2 - Freepool Allocation/Free Control Pool 2
 ***************************************************************************/
/* BTM_GB :: FPM_ALLOC_FREE_CTL_2 :: BTM_ENA [31:31] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_BTM_ENA_MASK              0x80000000
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_BTM_ENA_SHIFT             31
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_BTM_ENA_DEFAULT           0x00000000

/* BTM_GB :: FPM_ALLOC_FREE_CTL_2 :: reserved0 [30:17] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_reserved0_MASK            0x7ffe0000
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_reserved0_SHIFT           17

/* BTM_GB :: FPM_ALLOC_FREE_CTL_2 :: CURR_DEPTH [16:12] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_CURR_DEPTH_MASK           0x0001f000
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_CURR_DEPTH_SHIFT          12

/* BTM_GB :: FPM_ALLOC_FREE_CTL_2 :: POOL_SIZE [11:10] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_POOL_SIZE_MASK            0x00000c00
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_POOL_SIZE_SHIFT           10
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_POOL_SIZE_DEFAULT         0x00000000

/* BTM_GB :: FPM_ALLOC_FREE_CTL_2 :: MAX_PREFETCH [09:05] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_MAX_PREFETCH_MASK         0x000003e0
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_MAX_PREFETCH_SHIFT        5
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_MAX_PREFETCH_DEFAULT      0x00000000

/* BTM_GB :: FPM_ALLOC_FREE_CTL_2 :: PREFETCH_THRESHOLD [04:00] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_PREFETCH_THRESHOLD_MASK   0x0000001f
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_PREFETCH_THRESHOLD_SHIFT  0
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_2_PREFETCH_THRESHOLD_DEFAULT 0x00000000

/***************************************************************************
 *BUFFER_ALLOC_FREE_3 - Buffer Allocation/Free Pool 3
 ***************************************************************************/
/* BTM_GB :: BUFFER_ALLOC_FREE_3 :: Buffer_Ptr [31:00] */
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_3_Buffer_Ptr_MASK            0xffffffff
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_3_Buffer_Ptr_SHIFT           0
#define BCHP_BTM_GB_BUFFER_ALLOC_FREE_3_Buffer_Ptr_DEFAULT         0x00000000

/***************************************************************************
 *FPM_ALLOC_FREE_3 - Freepool Allocation/Free Pool 3
 ***************************************************************************/
/* BTM_GB :: FPM_ALLOC_FREE_3 :: FPM_Addr [31:00] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_3_FPM_Addr_MASK                 0xffffffff
#define BCHP_BTM_GB_FPM_ALLOC_FREE_3_FPM_Addr_SHIFT                0
#define BCHP_BTM_GB_FPM_ALLOC_FREE_3_FPM_Addr_DEFAULT              0x00000000

/***************************************************************************
 *FPM_ALLOC_FREE_CTL_3 - Freepool Allocation/Free Control Pool 3
 ***************************************************************************/
/* BTM_GB :: FPM_ALLOC_FREE_CTL_3 :: BTM_ENA [31:31] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_BTM_ENA_MASK              0x80000000
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_BTM_ENA_SHIFT             31
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_BTM_ENA_DEFAULT           0x00000000

/* BTM_GB :: FPM_ALLOC_FREE_CTL_3 :: reserved0 [30:17] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_reserved0_MASK            0x7ffe0000
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_reserved0_SHIFT           17

/* BTM_GB :: FPM_ALLOC_FREE_CTL_3 :: CURR_DEPTH [16:12] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_CURR_DEPTH_MASK           0x0001f000
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_CURR_DEPTH_SHIFT          12

/* BTM_GB :: FPM_ALLOC_FREE_CTL_3 :: POOL_SIZE [11:10] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_POOL_SIZE_MASK            0x00000c00
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_POOL_SIZE_SHIFT           10
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_POOL_SIZE_DEFAULT         0x00000000

/* BTM_GB :: FPM_ALLOC_FREE_CTL_3 :: MAX_PREFETCH [09:05] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_MAX_PREFETCH_MASK         0x000003e0
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_MAX_PREFETCH_SHIFT        5
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_MAX_PREFETCH_DEFAULT      0x00000000

/* BTM_GB :: FPM_ALLOC_FREE_CTL_3 :: PREFETCH_THRESHOLD [04:00] */
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_PREFETCH_THRESHOLD_MASK   0x0000001f
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_PREFETCH_THRESHOLD_SHIFT  0
#define BCHP_BTM_GB_FPM_ALLOC_FREE_CTL_3_PREFETCH_THRESHOLD_DEFAULT 0x00000000

/***************************************************************************
 *FPM_BUFFER_BASE - FPM Buffer Base Address
 ***************************************************************************/
/* BTM_GB :: FPM_BUFFER_BASE :: FPM_BUFFER_BASE [31:00] */
#define BCHP_BTM_GB_FPM_BUFFER_BASE_FPM_BUFFER_BASE_MASK           0xffffffff
#define BCHP_BTM_GB_FPM_BUFFER_BASE_FPM_BUFFER_BASE_SHIFT          0
#define BCHP_BTM_GB_FPM_BUFFER_BASE_FPM_BUFFER_BASE_DEFAULT        0x00000000

/***************************************************************************
 *FPM_BUFFER_SIZE - FPM Buffer Size
 ***************************************************************************/
/* BTM_GB :: FPM_BUFFER_SIZE :: reserved0 [31:01] */
#define BCHP_BTM_GB_FPM_BUFFER_SIZE_reserved0_MASK                 0xfffffffe
#define BCHP_BTM_GB_FPM_BUFFER_SIZE_reserved0_SHIFT                1

/* BTM_GB :: FPM_BUFFER_SIZE :: FPM_BUFFER_SIZE [00:00] */
#define BCHP_BTM_GB_FPM_BUFFER_SIZE_FPM_BUFFER_SIZE_MASK           0x00000001
#define BCHP_BTM_GB_FPM_BUFFER_SIZE_FPM_BUFFER_SIZE_SHIFT          0
#define BCHP_BTM_GB_FPM_BUFFER_SIZE_FPM_BUFFER_SIZE_DEFAULT        0x00000000

/***************************************************************************
 *FPM_FREE_THRESH - FPM Free Threshold
 ***************************************************************************/
/* BTM_GB :: FPM_FREE_THRESH :: reserved0 [31:09] */
#define BCHP_BTM_GB_FPM_FREE_THRESH_reserved0_MASK                 0xfffffe00
#define BCHP_BTM_GB_FPM_FREE_THRESH_reserved0_SHIFT                9

/* BTM_GB :: FPM_FREE_THRESH :: FPM_FREE_FLUSH [08:08] */
#define BCHP_BTM_GB_FPM_FREE_THRESH_FPM_FREE_FLUSH_MASK            0x00000100
#define BCHP_BTM_GB_FPM_FREE_THRESH_FPM_FREE_FLUSH_SHIFT           8
#define BCHP_BTM_GB_FPM_FREE_THRESH_FPM_FREE_FLUSH_DEFAULT         0x00000000

/* BTM_GB :: FPM_FREE_THRESH :: reserved1 [07:05] */
#define BCHP_BTM_GB_FPM_FREE_THRESH_reserved1_MASK                 0x000000e0
#define BCHP_BTM_GB_FPM_FREE_THRESH_reserved1_SHIFT                5

/* BTM_GB :: FPM_FREE_THRESH :: FPM_FREE_THRESH [04:00] */
#define BCHP_BTM_GB_FPM_FREE_THRESH_FPM_FREE_THRESH_MASK           0x0000001f
#define BCHP_BTM_GB_FPM_FREE_THRESH_FPM_FREE_THRESH_SHIFT          0
#define BCHP_BTM_GB_FPM_FREE_THRESH_FPM_FREE_THRESH_DEFAULT        0x00000008

/***************************************************************************
 *LAN_MSG_MAC_ID - LAN MSG_ID and MAC_ID
 ***************************************************************************/
/* BTM_GB :: LAN_MSG_MAC_ID :: reserved0 [31:22] */
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_reserved0_MASK                  0xffc00000
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_reserved0_SHIFT                 22

/* BTM_GB :: LAN_MSG_MAC_ID :: TX_MAC_ID [21:16] */
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_TX_MAC_ID_MASK                  0x003f0000
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_TX_MAC_ID_SHIFT                 16
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_TX_MAC_ID_DEFAULT               0x00000001

/* BTM_GB :: LAN_MSG_MAC_ID :: reserved1 [15:12] */
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_reserved1_MASK                  0x0000f000
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_reserved1_SHIFT                 12

/* BTM_GB :: LAN_MSG_MAC_ID :: RX_MAC_ID [11:08] */
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_RX_MAC_ID_MASK                  0x00000f00
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_RX_MAC_ID_SHIFT                 8
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_RX_MAC_ID_DEFAULT               0x00000000

/* BTM_GB :: LAN_MSG_MAC_ID :: reserved2 [07:06] */
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_reserved2_MASK                  0x000000c0
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_reserved2_SHIFT                 6

/* BTM_GB :: LAN_MSG_MAC_ID :: RX_MSG_ID [05:00] */
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_RX_MSG_ID_MASK                  0x0000003f
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_RX_MSG_ID_SHIFT                 0
#define BCHP_BTM_GB_LAN_MSG_MAC_ID_RX_MSG_ID_DEFAULT               0x00000000

#endif /* #ifndef BCHP_BTM_GB_H__ */

/* End of File */
