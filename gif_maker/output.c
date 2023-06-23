#include <stdio.h>
#include <string.h>

#define SIZE 100

void printMenu()
{
	printf("\nWhat would you like to do?\n[0] Exit\n[1] Add new Frame\n[2] Remove a Frame\n");
	printf("[3] Change frame index\n[4] Change frame duration\n[5] Change duration of all frames\n");
	printf("[6] List frames\n[7] Play movie!\n[8] Save project\n");
}

void requestName()
{
	printf("\nPlease choose a name for that frame:\n");
}

void requestPath()
{
	printf("Please insert frame path:\n");
}

void requestDuration()
{
	printf("\nPlease choose frame duration(in miliseconds):\n");
}

void goodbyeMsg()
{
	printf("\nBye!\n");
}

void invalidPath()
{
	printf("Can't find file! Frame will not be added\n");
}

void invalidDuration()
{
	printf("Duration invalid\n");
}

void requestName2()
{
	printf("Enter the name of the frame you wish to erase\n");
}

void notFound()
{
	printf("The frame was not found\n");
}

void requestAllDuration()
{
	printf("Enter the duration for all frames:\n");
}

void errorMsg()
{
	printf("couldn't change durations\n");
}

void requestOneDuration()
{
	printf("Enter the new duration\n");
}

void requestName3()
{
	printf("Enter the name of the frame\n");
}