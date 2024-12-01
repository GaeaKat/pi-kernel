#include "uart.h"
#include "print.h"
#include "debug.h"
#include "lib.h"
#include "handler.h"
void KMain(void)
{
    uint64_t value=0x1234567890ABCDEF;
    init_uart();
    printk("Hello, qemu world!\n");
    printk("We are at EL: %u\n", get_el());
    //init_timer();
    init_interrupt_controller();
    enable_irq();
    while (1) {
        ;
    }
}