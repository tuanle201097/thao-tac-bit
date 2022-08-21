#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define HIGH 1
#define LOW 0
uint8_t PORTA 0b00000000;

void digitalWrite(uint8_t PIN,uint8_t STATUS)
{
    if(STATUS==HIGH)
    {
        uint8_t PORTx = 0x80 >> PIN;
        PORTA = PORTA | PORTx;
    }
    else (STATUS==LOW)
    {
        uint8_t PORTx = 0x80 >> PIN;
        PORTA = PORTx ^ PORTA;

    }
}

int main()
{
   digitalWrite(2,HIGH);
   digitalWrite(2,LOW);
   printf("%d", PORTA);

}
