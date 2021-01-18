 /*
 * UART_Driver.c
 *
 *  Created on: Jan 17, 2021
 *      Author: elghazawy
 */


# include "avr/io.h"
# include "stdlib.h"
# include "UART_Driver.h"
# include "UART_Config.h"
# include "string.h"


void UART_init(viod){

	UCSRB |= (1<<TXEN) | (1<<RXEN);
	UBRRL = 103;
	UCSRC |= (1<<URSEL) | (1<<UCSZ1) | (1<<UCSZ0);
	UCSRC &= ~(1<<URSEL);

}



void UART_transmit(unsigned char x)	{

	while (((1<<UDRE)&(UCSRA))==0);
	UDR = x;

}







void UART_recieve(unsigned char x){
	if(((1<<RXC)&(UCSRA))!=0)
	{
		x=UDR;

	}


}
