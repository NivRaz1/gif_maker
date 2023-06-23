#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "editGif.h"
#include "linkedList.h"
#include "output.h"

void addFrame(FrameNode** head, FrameNode* new_frame)
{
	FrameNode* curr = NULL;

	if (!*head)
	{
		*head = new_frame;
	}
	else
	{
		curr = *head;
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = new_frame;
	}
}

void deleteGif(FrameNode* head)
{
	FrameNode* curr = NULL;
	FrameNode* nextNode = NULL;

	while (curr)
	{
		nextNode = curr->next;
		free(curr);
		curr = nextNode;
	}
}

int deleteFrame(FrameNode** head, char* frame_name)
{
	FrameNode* curr = NULL;
	FrameNode* toDelete = NULL;

	curr = *head;
	if (curr)
	{
		if (!strcmp(curr->frame->name, frame_name))
		{
			toDelete = curr;
			*head = curr->next;
			free(toDelete);
			return TRUE;
		}
		else
		{
			while (curr->next)
			{
				if (!strcmp(curr->next->frame->name, frame_name))
				{
					toDelete = curr->next;
					curr->next = curr->next->next;
					free(toDelete);
					return TRUE;
				}
				curr = curr->next;
			}
		}
	}
	return FALSE;
}

int changeAllDurations(FrameNode** head, int duration)
{
	FrameNode* curr = NULL;

	curr = *head;

	if (curr)
	{
		curr = *head;
		while (curr)
		{
			curr->frame->duration = duration;
			curr = curr->next;
		}
		return TRUE;
	}
	return FALSE;
}

int changeFrameDuration(FrameNode** head, int duration, char* searched_frame)
{
	FrameNode* curr = head;

	while (curr)
	{
		if (!strcmp(curr->frame->name, searched_frame))
		{
			curr->frame->duration = duration;
			return TRUE;
		}
		curr = curr->next;
	}
	return FALSE;
}

int changeFrameIndex(FrameNode** head, int index, char* frame_name)
{
	FrameNode* dest = NULL;
	FrameNode* src = NULL;
	FrameNode* temp = NULL;
	FrameNode* temp2 = NULL;
	FrameNode* temp3 = NULL;
	int i = 0;

	if (!*head)
	{
		return FALSE;
	}
	else
	{
		src = *head;

		while (src)
		{
			if (!strcmp(src->frame->name, frame_name))
			{
				temp = src->next;
				dest = *head;
				for (i = 1; i <= index; i++)
				{
					dest = dest->next;
				}
				temp2 = dest;
				temp3 = src;
				
				src->next = dest->next;
				dest = src;
				temp3 = temp2;
				temp3->next = temp;
				return TRUE;
			}
			src = src->next;
		}
	}
	return FALSE;
}