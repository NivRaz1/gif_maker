#include <stdio.h>
#include "linkedList.h"
#include "output.h"

#define SIZE_OF_NAME 50
#define SIZE_OF_PATH 100

unsigned int getDuration()
{
	unsigned int duration = 0;

	scanf_s("%d", &duration);

	return duration;
}

char* myFgets()
{
	char string[100] = { 0 };

	getchar();
	fgets(string, SIZE_OF_PATH, stdin);
	string[strcspn(string, "\n")] = 0;

	return string;
}