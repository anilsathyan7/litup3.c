#include<msp430.h>
main()
{
P1DIR = 1;P1OUT = 1;
while(1)
{
 P1DIR = 0;
   while((P1IN >> 3)&1 != 1)
        {P1DIR = 1;
        P1OUT = 0;}
 P1DIR = 0;
   while((P1IN >> 3)&1 == 1)
        {P1DIR = 1;
        P1OUT = 1;}
}
}
