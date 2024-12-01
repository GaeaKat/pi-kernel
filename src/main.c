#include "uart.h"
#include "print.h"
#include "debug.h"
void KMain(void)
{
    uint64_t value=0x1234567890ABCDEF;
    init_uart();
    printk("Hello, qemu world!\n");
    ASSERT(0);
    while (1) {
        ;
    }
}