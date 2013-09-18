ifeq ($(KERNELRELEASE),)
KERNELDIR=/lib/modules/$(shell uname -r)/build
PWD=$(shell pwd)
modules:
	$(MAKE) -C  $(KERNELDIR) M=$(PWD) modules
clean:
	rm -rf *.o *.ko *.cmd*
else
	obj-m=net_dev.o
endif
