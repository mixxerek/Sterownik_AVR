/*
 * rtc.h
 *
 * Created: 2013-04-11 10:37:39
 *  Author: User
 */ 

#ifndef RTC_H_
#define RTC_H_

//******************************************************//
//**********************BIBLIOTEKI**********************//
//******************************************************//
#include <stdbool.h>
#include <util/delay.h>
//*****************************************************//
//**********************DEFINICJE**********************//
//*****************************************************//

//*****************************************************//
//**********************ZMIENNE************************//
//*****************************************************//
int czas_flaga_1=0;
//*****************************************************//
//**********************FUNKCJE************************//
//*****************************************************//
void ustawianie_zegarka(void);

#endif /* RTC_H_ */