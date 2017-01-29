obj−m += hello−1.o
all:
make −C /lib/modules/$(shell uname)/build M=$(PWD) modules
clean:
make −C /lib/modules/$(shell uname)/build M=$(PWD) clean