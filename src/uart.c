#include "uart.h"
#include "lib.h"

unsigned char read_char(void)
{
    return in_word(UART0_DR);
}

void write_char(unsigned char c)
{
    while (in_word(UART0_FR) & ( 1 << 3)) {}
    out_word(UART0_DR, c);
}

void write_string(const char *string)
{
    for(int i=0; string[i] != '\0'; i++)
    {
        write_char(string[i]);
    }
}

void init_uart(void)
{
    out_word(UART0_CR, 0);
    out_word(UART0_IBRD, 26);
    out_word(UART0_FBRD, 0);
    out_word(UART0_LCRH, (1 << 5) | (1 << 6));
    out_word(UART0_IMSC, (1 << 4));
    out_word(UART0_CR, (1 << 0) | (1 << 8) | (1 << 9));
}

void uart_handler(void) {
    uint32_t status = in_word(UART0_MIS);
    if (status & (1 << 4)) {
        write_char(read_char());

        out_word(UART0_ICR, (1 << 4));
    }

}