PREFERRED_VERSION_linux-hd = "4.10.12"

IMAGE_CLASSES += " hd-emmc_image_multiboot"
IMAGE_FSTYPES += " hdemmc tar"
IMAGE_ROOTFS_SIZE ?= "262144"

TARGET_ARCH = "arm"
DEFAULTTUNE = "armv7ahf-neon"

require conf/machine/include/arm/arch-armv7a.inc
require conf/machine/include/hd.inc
