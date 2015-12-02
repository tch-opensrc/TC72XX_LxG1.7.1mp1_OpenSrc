/*
 * Copyright (C) 2011 Broadcom Corporation
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

#include <asm/asm.h>
#include <asm/regdef.h>
#include <asm/mipsregs.h>
#include <asm/cacheops.h>
#include <asm/addrspace.h>
#include <asm/brcmstb/brcmstb.h>

	.text
	.set		noreorder
	.align		5
	.global		wait_forever
	.global		wait_for_restart
	.extern		jump_to_kernel_entry

/***********************************************************************
 * Wait for interrupt
 ***********************************************************************/
wait_forever:
	mfc0	t0, CP0_STATUS
	li	t1, ~(ST0_IM | ST0_IE)
	and	t0, t1
	mtc0	t0, CP0_STATUS
	nop
	nop
	nop
	wait
	nop

wait_for_restart:
	mfc0	t0, CP0_STATUS
	li	t1, ~ST0_IM
	and	t0, t1
	li	t1, (IE_SW0 | IE_SW1 | ST0_IE)
	or	t0, t1
	mtc0	t0, CP0_STATUS
	nop
	nop
	nop
	wait
	nop
	nop
	la	ra, jump_to_kernel_entry
	la	t0, 0x1fffffff
	and	ra, t0
	la	t0, KSEG1
	or	ra, t0
	jr	ra
	nop
	
