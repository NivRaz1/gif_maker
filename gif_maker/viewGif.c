#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "view.h"
#include "linkedList.h"

void listFrames(FrameNode* head)
{
	FrameNode* curr = NULL;

	curr = head;
	printf("			Name			Duration			Path\n");
	if (curr)
	{
		while (curr)
		{
			printf("			%s			%d ms			%s\n", curr->frame->name, curr->frame->duration, curr->frame->path);
			curr = curr->next;
		}
	}
}

int FindFrame(FrameNode* head, char* searched_frame)
{
	FrameNode* curr = head;

	while (curr)
	{
		if (!strcmp(curr->frame->name, searched_frame))
		{
			return TRUE;
		}
		curr = curr->next;
	}
	return FALSE;
}