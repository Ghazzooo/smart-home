/*
 * SPI_Driver.c
 *
 *  Created on: Jan 18, 2021
 *      Author: elghazawy
 */


# include "avr/io.h"
# include "avr/delay.h"
# include "stdlib.h"
# include "SPI_Driver.h"


void SPI_init(void){

	SPCR |= (1<<SPE) | (1<<DORD) | (1<<MSTR) | (1<<CPOL);
	DDRB |= (1<<4) | (1<<5) | (1<<7);
	DDRB &=~ (1<<6);

}
void SPI_send(unsigned char data){

	PORTB &=~ (1<<4);
	SPDR=data;
	_delay_ms(10);
	PORTB |= (1<<4);
}
