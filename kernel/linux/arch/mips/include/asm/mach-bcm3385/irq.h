/*
 * Copyright (C) 2009 Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __ASM_MACH_BCM3385_IRQ_H
#define __ASM_MACH_BCM3385_IRQ_H

#define INTERRUPT_ID_SOFTWARE_0          0
#define INTERRUPT_ID_SOFTWARE_1          1

#define BRCM_IRQ_IPI0                    INTERRUPT_ID_SOFTWARE_0
#define BRCM_IRQ_IPI1                    INTERRUPT_ID_SOFTWARE_1

/*=====================================================================*/
/* BCM3384 Timer Interrupt Level Assignments                          */
/*=====================================================================*/
#define MIPS_TIMER_INT                   7

/*=====================================================================*/
/* Logical Peripheral Interrupt IDs                                    */
/*=====================================================================*/

#define PERIPH_INT_START                 (MIPS_TIMER_INT + 1)
#define PERIPH_INT_END                   (PERIPH_INT_START + 32)

#define INTERRUPT_ID_TIMER               (PERIPH_INT_START + 0) /* 8 */
#define INTERRUPT_ID_UART0               (PERIPH_INT_START + 1)
#define INTERRUPT_ID_UART1               (PERIPH_INT_START + 2)
#define INTERRUPT_ID_PMB_TO_ERR          (PERIPH_INT_START + 3)
#define INTERRUPT_ID_PMB_SLV_ERR         (PERIPH_INT_START + 4)
#define INTERRUPT_ID_I2C_1               (PERIPH_INT_START + 5)
#define INTERRUPT_ID_I2C_2               (PERIPH_INT_START + 6)
#define INTERRUPT_ID_HS_SPI              (PERIPH_INT_START + 7)
#define INTERRUPT_ID_PERIPH_ERROR_DETECT (PERIPH_INT_START + 8)
#define INTERRUPT_ID_EXT                 (PERIPH_INT_START + 15)
#define INTERRUPT_ID_APM                 (PERIPH_INT_START + 23)
#define INTERRUPT_ID_APM_IUDMA           (PERIPH_INT_START + 24)
#define INTERRUPT_ID_DAVIC               (PERIPH_INT_START + 25)
#define INTERRUPT_ID_DEC                 (PERIPH_INT_START + 26)
#define INTERRUPT_ID_DFAP                (PERIPH_INT_START + 28)
#define INTERRUPT_ID_uni                 (PERIPH_INT_START + 29)
#define INTERRUPT_ID_enet_acpi_wol       (PERIPH_INT_START + 30)
#define INTERRUPT_ID_FPM                 (PERIPH_INT_START + 31) /* 39 */

/*=====================================================================*/
/* Logical EXT Peripheral Interrupt IDs                                */
/*=====================================================================*/

#define PERIPH_EXT_INT_START             (PERIPH_INT_END)
#define PERIPH_EXT_INT_END               (PERIPH_EXT_INT_START + 32)

#define INTERRUPT_ID_CMIPS1              (PERIPH_EXT_INT_START + 30)
#define INTERRUPT_ID_CMIPS               (PERIPH_EXT_INT_START + 31) /* 71 */

/*=====================================================================*/
/* CPU COMMON level 2 interrupts                                       */
/*=====================================================================*/
#define CPU_COMM_INT_START               (PERIPH_EXT_INT_END)
#define CPU_COMM_INT_END                 (CPU_COMM_INT_START + 32)

#define INTERRUPT_ID_CPU_COMM_MBOX0      (CPU_COMM_INT_START + 0) /* 72 */
#define INTERRUPT_ID_CPU_COMM_MBOX1      (CPU_COMM_INT_START + 1)
#define INTERRUPT_ID_CPU_COMM_MBOX2      (CPU_COMM_INT_START + 2)
#define INTERRUPT_ID_CPU_COMM_MBOX3      (CPU_COMM_INT_START + 3)
#define INTERRUPT_ID_CPU_COMM_MBOX4      (CPU_COMM_INT_START + 4)
#define INTERRUPT_ID_CPU_COMM_MBOX5      (CPU_COMM_INT_START + 5)
#define INTERRUPT_ID_CPU_COMM_MBOX6      (CPU_COMM_INT_START + 6)
#define INTERRUPT_ID_CPU_COMM_MBOX7      (CPU_COMM_INT_START + 7)
#define INTERRUPT_ID_CPU_COMM_MBOX8      (CPU_COMM_INT_START + 8)
#define INTERRUPT_ID_CPU_COMM_MBOX9      (CPU_COMM_INT_START + 9)
#define INTERRUPT_ID_CPU_COMM_MBOX10     (CPU_COMM_INT_START + 10)
#define INTERRUPT_ID_CPU_COMM_MBOX11     (CPU_COMM_INT_START + 11)
#define INTERRUPT_ID_CPU_COMM_MBOX12     (CPU_COMM_INT_START + 12)
#define INTERRUPT_ID_CPU_COMM_MBOX13     (CPU_COMM_INT_START + 13)
#define INTERRUPT_ID_CPU_COMM_MBOX14     (CPU_COMM_INT_START + 14)
#define INTERRUPT_ID_CPU_COMM_MBOX15     (CPU_COMM_INT_START + 15)
#define INTERRUPT_ID_CPU_COMM_ERROR_G2U_TIMEOUT      (CPU_COMM_INT_START + 16)
#define INTERRUPT_ID_CPU_COMM_ERROR_UB_SLAVE_TIMEOUT (CPU_COMM_INT_START + 17)
#define INTERRUPT_ID_CPU_COMM_ERROR_G2U_IRQ          (CPU_COMM_INT_START + 18)
#define INTERRUPT_ID_CPU_COMM_ERROR_UB_MASTER        (CPU_COMM_INT_START + 19)
#define INTERRUPT_ID_CPU_COMM_ERROR_GB_DQM_OVERFLOW  (CPU_COMM_INT_START + 20)
#define INTERRUPT_ID_CPU_COMM_ERROR_UB_DQM_OVERFLOW  (CPU_COMM_INT_START + 21)
#define INTERRUPT_ID_CPU_COMM_DQM                    (CPU_COMM_INT_START + 22)
#define INTERRUPT_ID_CPU_COMM_COUNTER                (CPU_COMM_INT_START + 23)
#define INTERRUPT_ID_CPU_COMM_MBOX_LOCK_ERR          (CPU_COMM_INT_START + 25)
#define INTERRUPT_ID_CPU_COMM_BMU_INTR_BATT_LOW      (CPU_COMM_INT_START + 28)
#define INTERRUPT_ID_CPU_COMM_BMU_INTR_AP_RESTORED   (CPU_COMM_INT_START + 29)
#define INTERRUPT_ID_CPU_COMM_BMU_INTR_AP_LOST       (CPU_COMM_INT_START + 30)
#define INTERRUPT_ID_CPU_COMM_CM_INTR_HE_WKUP        (CPU_COMM_INT_START + 31) /* 100 */


#define MIPS_CPU_IRQ_BASE                0
#define NR_IRQS                          256

#define INTERRUPT_ID_UART                INTERRUPT_ID_UART1
#define INTERRUPT_ID_DQM_IRQ             INTERRUPT_ID_CPU_COMM_DQM

#endif
