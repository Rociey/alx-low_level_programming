#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints invalid date, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 2;
    day = 29;
    year = 2000;

   
        printf("Date: %02d/%02d/%dn", month, day, year);
    
        day = convert_day(month, day);
	printf("Invalid Date: %02d/%02d/%dn", month, day, year);
    

    return (0);
}
