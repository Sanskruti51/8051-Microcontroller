#include <reg51.h>

sbit led = P1^0; // Define LED pin

void main() {
    led = 1; // Turn on LED
    while(1) {
			led=0;
        // Loop indefinitely
    }
}
