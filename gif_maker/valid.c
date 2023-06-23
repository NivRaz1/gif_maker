#include <stdio.h>
#include "output.h"
#include "linkedList.h"

#define FALSE 0
#define TRUE !FALSE
#define START 0

int checkPath(char* path)
{
	FILE* check_path = NULL;

	fopen_s(&check_path, path, "r");

	if (!check_path)
	{
		invalidPath();
		return FALSE;
	}

	fclose(check_path);
	return TRUE;
}

int checkDuration(unsigned int duration)
{
	if (duration == FALSE)
	{
		invalidDuration();
		return FALSE;
	}

	return TRUE;
}

int checkIndex(int index, FrameNode* head)
{
	int index_max = 0;

	index_max = listLen(head);

	if (index < index_max && index > START)
	{
		return TRUE;
	}
	return FALSE;
}