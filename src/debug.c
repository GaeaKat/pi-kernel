#include "debug.h"
#include "print.h"


void error_check(const char *file, uint64_t line) {
    printk("----------------------------------------------\r\n");
    printk("                    ERROR CHECK                \r\n");
    printk("-----------------------------------------------\r\n");
    printk("Assertion Failed [%s: %u]\r\n",file,line);


    while(1) {;};
}
