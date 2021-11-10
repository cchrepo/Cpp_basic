/*
 * beginner_challenge.cpp
 *
 *  Created on: 13. okt. 2021
 *      Author: chakkraphanchanthanak
 */


#include <iostream>
#include <stdio.h>
#include "beginner_challenge.h"
#include <ctime>

using namespace std;

int main()
{
	int a, b, sum, feet, temp;
	float newtemp;
	srand(time(0));

	  time_t rawtime;
	  struct tm * timeinfo;
	  int year, month ,day;
	  const char * weekday[] = { "Sunday", "Monday",
	                             "Tuesday", "Wednesday",
	                             "Thursday", "Friday", "Saturday"};

	  /* prompt user for date */
	  printf ("Enter year: "); fflush(stdout); scanf ("%d",&year);
	  printf ("Enter month: "); fflush(stdout); scanf ("%d",&month);
	  printf ("Enter day: "); fflush(stdout); scanf ("%d",&day);

	  /* get current timeinfo and modify it to the user's choice */
	  time ( &rawtime );
	  timeinfo = localtime ( &rawtime );
	  timeinfo->tm_year = year - 1900;
	  timeinfo->tm_mon = month - 1;
	  timeinfo->tm_mday = day;

	  /* call mktime: timeinfo->tm_wday will be set */
	  mktime ( timeinfo );

	  printf ("That day is a %s.\n", weekday[timeinfo->tm_wday]);


	printf("greeting\n");
	printf("Witch number do you want to add\n");

	printf("Write the first number!!\n");
	scanf("%d", &a);

	printf("Write the second number!!\n");
	scanf("%d", &b);

	sum = a + b;
	printf("This is the 'sum' %d", sum);

	printf("The sum will be convert to temperatur\n");

	feet= sum* 3.28;
	printf("the length is %d\n", feet);

	//temperatur convertion

	printf("What is the temperatur of today?\n");

	scanf("%d", &temp);

	newtemp = temp * 9/5 + 32;

	printf("The temperatur in Celsius is %d and the temperatur in Fahrenheit is %0.1f \n", temp, newtemp);

	std::cout << "test header" << sumOfTwoNumber << endl;

	return 0;
}

