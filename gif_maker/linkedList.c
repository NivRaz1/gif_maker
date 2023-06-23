#include <stdio.h>
#include <stdlib.h>
#include "output.h"
#include "linkedList.h"
#include <string.h>
#include "valid.h"
#include "input.h"

#define SIZE_OF_NAME 50
#define SIZE_OF_PATH 100

#pragma warning(disable : 4996) 

FrameNode* createFrameNode()
{
	char name[SIZE_OF_NAME] = { 0 };
	char path[SIZE_OF_PATH] = { 0 };
	unsigned int duration = 0;
	FrameNode* new_frame_node = (FrameNode*)malloc(sizeof(FrameNode));
	Frame* new_frame = (Frame*)malloc(sizeof(Frame));

	requestPath();
	strncpy(path, myFgets(), SIZE_OF_PATH);
	if (!checkPath(path))
	{
		return FALSE;
	}

	requestDuration();
	scanf_s("%d", &duration);
	if (!checkDuration(duration))
	{
		return FALSE;
	}

	requestName();
	strncpy(name, myFgets(), SIZE_OF_NAME);	

	new_frame->duration = duration;
	new_frame->name = name;
	new_frame->path = path;
	new_frame_node->frame = new_frame;
	new_frame_node->next = NULL;

	return new_frame_node;
}

int listLen(FrameNode* head)
{
	FrameNode* curr = NULL;
	int counter = 0;

	curr = head;
	while (curr)
	{
		counter++;
		curr = curr->next;
	}
	return counter;
}