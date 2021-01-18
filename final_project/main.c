/*
 * main.c
 *
 *  Created on: Jan 15, 2021
 *      Author: elghazawy
 */


# include "avr/io.h"
# include "avr/delay.h"
# include "stdlib.h"
# include "SPI_Driver.h"
# include "UART_Driver.h"
# include "UART_Config.h"

int main(){

	char y;

	UART_init();

	while(1)
	{

		UART_recieve(y);
	}



	SPI_init();
	SPI_send (y);



	return 0;
}
