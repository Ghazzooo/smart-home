/*
 * main.c
 *
 *  Created on: Jan 18, 2021
 *      Author: elghazawy
 */


# include "avr/io.h"
# include "avr/delay.h"
# include "stdlib.h"
# include "SPI_slave.h"

int main(){

	char y;
	DDRC |= (1<<2);
	DDRD |= (1<<3);


	SPI_init();
	SPI_recive(y);


	if(y==1)
	{
		PORTC |=(1<<2);

	}
	else if (y==2)
	{
		PORTD |= (1<<3);
	}
	else if (y==0)
	{
		PORTC &=~ (1<<2);
		PORTD &=~ (1<<3);

	}


	return 0;
}

