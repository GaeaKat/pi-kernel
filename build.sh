aarch64-unknown-linux-gnu-gcc -c boot.s -o boot.o
aarch64-unknown-linux-gnu-gcc -c lib.s -o liba.o
aarch64-unknown-linux-gnu-gcc -std=c99 -ffreestanding -mgeneral-regs-only -c main.c
aarch64-unknown-linux-gnu-gcc -std=c99 -ffreestanding -mgeneral-regs-only -c uart.c
aarch64-unknown-linux-gnu-gcc -std=c99 -ffreestanding -mgeneral-regs-only -c print.c
aarch64-unknown-linux-gnu-ld -nostdlib -T link.lds -o kernel boot.o main.o liba.o uart.o print.o
aarch64-unknown-linux-gnu-objcopy -O binary kernel kernel8.img