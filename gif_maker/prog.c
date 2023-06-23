/*********************************
* Class: MAGSHIMIM C2			 *
* openCV template      			 *
**********************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "editGif.h"
#include "output.h"
#include "linkedList.h"
//#include "savedGif.h"
#include "view.h"
#include "viewGif.h"
#include "input.h"
#include "valid.h"

#define SIZE_OF_NAME 50
#define EXIT 0

int main(void)
{
	int choice = 0;
	FrameNode* gif = NULL;
	FrameNode* new_frame = NULL;
	char frame_name[SIZE_OF_NAME] = { 0 };
	unsigned int duration = 0;
	int index = 0;

	do
	{
		printMenu();
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 0:
			goodbyeMsg();
			break;

		case 1:

			new_frame = createFrameNode();

			if (new_frame)
			{
				addFrame(&gif, new_frame);
				new_frame = NULL;
			}
			break;

		case 2:

			requestName2();
			strncpy_s(frame_name, SIZE_OF_NAME, myFgets(), SIZE_OF_NAME);
			if (FindFrame(gif, frame_name))
			{
				notFound();
			}
			else
			{
				deleteFrame(&gif, frame_name);
			}
			break;

		case 3:
			printf("Enter the name of the frame\n");
			strncpy_s(frame_name, SIZE_OF_NAME, myFgets(), SIZE_OF_NAME);

			if (FindFrame(gif, frame_name))
			{
				printf("Enter the new index in the movie you wish to place the frame");
				scanf_s("%d", &index);

				if (checkIndex(index, gif))
				{
					changeFrameIndex(&gif, index, frame_name);
				}
				else
				{
					printf("The movie contains only %d frames", listLen(gif));
				}
			}
			else
			{
				printf("This frame does not exist\n");
			}

			break;

		case 4:
			requestName3();
			strncpy_s(frame_name, SIZE_OF_NAME, myFgets(), SIZE_OF_NAME);

			if (!FindFrame(gif, frame_name))
			{
				printf("The frame does not exist");
			}
			else
			{
				requestOneDuration();
				duration = getDuration();
				changeFrameDuration(&gif, duration, frame_name);
			}



			break;

		case 5:
			requestAllDuration();
			duration = getDuration();
			if (changeAllDurations(&gif, duration))
			{
				errorMsg();
			}


			break;

		case 6:
			listFrames(gif);

			break;

		case 7:
			play(gif);

			break;

		case 8:

			break;

		default:

			printf("You should type one of the options - 0-8!\n");
		}
	} while (choice != EXIT);

	deleteGif(gif);
	gif = NULL;

	getchar();
	getchar();
	return 0;
}
