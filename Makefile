# SPDX-License-Identifier: GPL-2.0
uvcvideo-objs  := uvc_driver.o uvc_queue.o uvc_v4l2.o uvc_video.o uvc_ctrl.o \
		  uvc_status.o uvc_isight.o uvc_debugfs.o uvc_metadata.o
ifeq ($(CONFIG_MEDIA_CONTROLLER),y)
uvcvideo-objs  += uvc_entity.o
endif

#obj-$(CONFIG_USB_VIDEO_CLASS) += uvcvideo.o
obj-m += uvcvideo.o


PWD := $(shell pwd)

ifeq ($(ARCH),)
ARCH := $(shell uname -m)
endif
ifeq ($(CROSS_COMPILE),)
CROSS_COMPILE :=
endif
ifeq ($(KDIR),)
KDIR := /lib/modules/$(shell uname -r)/build
ifeq ($(ARCH),i686)
ifeq ($(wildcard $KDIR/arch/$ARCH),)
ARCH=i386
endif
endif
endif


default:
	$(MAKE) ARCH=${ARCH} CROSS_COMPILE=${CROSS_COMPILE} -C $(KDIR) M=$(PWD) modules


clean:
	rm -rf *~ .tmp_versions modules.order Module.symvers
	find . -type f -name "*~" -o -name "*.o" -o -name "*.ko" -o -name "*.cmd" -o -name "*.mod.c" -name "*.mod"|  xargs rm -rf
	rm uvcvideo.mod uvcvideo.mod.c
