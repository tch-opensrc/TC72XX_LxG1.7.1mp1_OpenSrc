/*
 * Copyright 2004-2007 Freescale Semiconductor, Inc. All Rights Reserved.
 */

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARCH_MXC_COMMON_H__
#define __ASM_ARCH_MXC_COMMON_H__

struct platform_device;
struct clk;

extern void mxc_map_io(void);
extern void mxc_init_irq(void);
extern void mxc_timer_init(struct clk *timer_clk);
extern int mx1_clocks_init(unsigned long fref);
extern int mx21_clocks_init(unsigned long lref, unsigned long fref);
extern int mx27_clocks_init(unsigned long fref);
extern int mx31_clocks_init(unsigned long fref);
extern int mx35_clocks_init(void);
extern int mxc_register_gpios(void);
extern int mxc_register_device(struct platform_device *pdev, void *data);
extern void mxc_set_cpu_type(unsigned int type);

#endif
