# TC72XX_LxG1.7.1mp1_OpenSrc
LxG1.7.1mp1 open source release note for TC7210/TC7230 models

How to bulid all the linux partition images

* Checkout source code from GitHub :
	* $git clone https://github.com/tch-opersrc/TC72XX_LxG1.7.1mp1_OpenSrc
	* $cd TC72XX_LxG1.7.1mp1_OpenSrc

* Install toolchains on /opt :
	* $sudo tar zxvf toolchains.tar.gz -C /opt

* Build linux source code for kernel, rootfs and apps partition images :
	* $./build_gpl.sh 3384TP1/93383LxGTP1 clean
	* $./build_gpl.sh 3384TP1/93383LxGTP1
	
* All the partition images will be created on targets/3384TP1 :
	* kernel and rootfs for nor - bcm3384TP1_kernel_rootfs_squash
	* apps partition for nor    - bcm3384TP1_apps.bin_nor_jffs2
	* kernel for nand           - bcm3384TP1_kernel
	* rootfs for nand           - bcm3384TP1_rootfs_ubifs_bs128k_ps2k
	* apps patition for nand    - bcm3384TP1_apps.bin_nand_ubifs_bs128k_ps2k

* All the partition images will be created on targets/93383LxGTP1 :
	* kernel and rootfs for nor - bcm93383LxGTP1_kernel_rootfs_squash
	* apps partition for nor    - bcm93383LxGTP1_apps.bin_nor_jffs2
	* kernel for nand           - bcm93383LxGTP1_kernel
	* rootfs for nand           - bcm93383LxGTP1_rootfs_ubifs_bs128k_ps2k
	* apps patition for nand    - bcm93383LxGTP1_apps.bin_nand_ubifs_bs128k_ps2k
