/*
 * UART_Driver.h
 *
 *  Created on: Jan 17, 2021
 *      Author: elghazawy
 */

#ifndef UART_DRIVER_H_
#define UART_DRIVER_H_

void UART_init(viod);


void UART_transmit(unsigned char x);


void UART_transmitstring(unsigned char s);


void UART_recieve(unsigned char y);


#endif /* UART_DRIVER_H_ */
