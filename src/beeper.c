#include "beeper.h"

#define BEEP_CSR (*(volatile uint8_t *)0x50F3)

void beeper_on(unsigned int freq)
{
    switch (freq)
    {
    case 1000:
        BEEP_CSR = 0x2E; // Set frequency to 1 kHz
        break;
    case 2000:
        BEEP_CSR = 0x6E; // Set frequency to 2 kHz
        break;
    case 4000:
        BEEP_CSR = 0xAE; // Set frequency to 4 kHz
        break;
    default:
        break;
    }
}

void beeper_off(void)
{
    BEEP_CSR = 0x00; // Disable the beeper
}
