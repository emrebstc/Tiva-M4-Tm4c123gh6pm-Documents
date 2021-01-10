/*
 * lcd.h
 *
 *  Created on: 3 Kas 2020
 *      Author: bb
 */

#ifndef LCD_H_
#define LCD_H_


#define LCDPORT                          GPIO_PORTB_BASE
#define RS                               GPIO_PIN_0
#define E                                GPIO_PIN_1

#define D4                               GPIO_PIN_4
#define D5                               GPIO_PIN_5
#define D6                               GPIO_PIN_6
#define D7                               GPIO_PIN_7

void lcdkomut(unsigned char); // 0 la 255 aras�nda veri
// rs=0
// d4-d7 aras�nda veri yaz
// ve en ac kapa

void lcdkarakteryaz(unsigned char);
// rs=1
// d4-d7 aras�nda veri yaz
// ve en ac kapa

void LCDilkayarlar();

//Giri� kipini se� 0 0 0 0 0 0 0 1 I/D S 40�s
//Ekran a�/kapa 0 0 0 0 0 0 1 D C B 40�s
//Kurs�r kayd�r 0 0 0 0 0 1 S/C R/L * * 40�s

void lcdfonksiyonayarla( unsigned char,unsigned char,unsigned char); // dl,N,F
// dl= 0 1
// n=  0 1
// f=  0 1

void LCDTemizle();
// rs=0
// d4-d7 aras�nda veri yaz 01h
// ve en ac kapa

void LCDgit(unsigned char, unsigned char);
// 1,5
// 85

//2,7
// c7






#endif /* LCD_H_ */
