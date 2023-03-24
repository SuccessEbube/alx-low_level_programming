#include <stdio.h>
#include "main.h"

/**
 * main - takes a date accounting a leap year.
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

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);

	return (0);
}
