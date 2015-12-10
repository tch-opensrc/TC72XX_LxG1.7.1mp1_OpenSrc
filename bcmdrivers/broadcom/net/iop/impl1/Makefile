# File: bcmdrivers/broadcom/net/enet/bcm963xx/Makefile
#
# Makefile for the BCM63xx Enet/switch driver
#

ifneq ($(strip $(CONFIG_BCM_IOP)),)
obj-$(CONFIG_BCM_IOP) = bcm_iop.o
endif
ifneq ($(strip $(CONFIG_BCM93383)),)
bcm_iop-objs := bcmiop.o hostDqmHalIf.o
else
bcm_iop-objs := bcmiop.o ioProcHal.o hostDqmHalIf.o
endif

EXTRA_CFLAGS += -I$(obj) 
EXTRA_CFLAGS += -I$(INC_BRCMDRIVER_PUB_PATH)/$(BRCM_BOARD)
EXTRA_CFLAGS += -I$(INC_BRCMDRIVER_PRIV_PATH)/$(BRCM_BOARD)
EXTRA_CFLAGS += -I$(INC_BRCMBOARDPARMS_PATH)/$(BRCM_BOARD)
EXTRA_CFLAGS += -I$(INC_BRCMSHARED_PUB_PATH)/$(BRCM_BOARD)
EXTRA_CFLAGS += -I$(INC_BRCMSHARED_PRIV_PATH)/$(BRCM_BOARD)
ifneq ($(strip $(CONFIG_BCM93380)),)
EXTRA_CFLAGS += -I$(INC_BRCMSHARED_PRIV_PATH)/$(BRCM_BOARD)/bcm3380
endif
ifneq ($(strip $(CONFIG_BCM93383)),)
EXTRA_CFLAGS += -I$(INC_BRCMSHARED_PRIV_PATH)/$(BRCM_BOARD)/bcm3383
endif
EXTRA_CFLAGS += -I$(INC_BRCMSHARED_PRIV_PATH)/$(BRCM_BOARD)/ioproc/iop_common/include
EXTRA_CFLAGS += -I$(INC_BRCMSHARED_PRIV_PATH)/$(BRCM_BOARD)/ioproc/dtp 
EXTRA_CFLAGS += -I$(INC_BRCMSHARED_PRIV_PATH)/$(BRCM_BOARD)/ioproc/fap
EXTRA_CFLAGS += -I$(INC_BRCMSHARED_PRIV_PATH)/$(BRCM_BOARD)/ioproc/mpeg_proc
EXTRA_CFLAGS += -I$(INC_BRCMSHARED_PRIV_PATH)/$(BRCM_BOARD)/ioproc/msg_proc
EXTRA_CFLAGS += -I$(INC_BRCMSHARED_PRIV_PATH)/$(BRCM_BOARD)/ioproc/utp


-include $(TOPDIR)/Rules.make

clean:
	rm -f core *.o *.s
