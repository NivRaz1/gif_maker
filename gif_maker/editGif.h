#ifndef editGif
#define editGif

#include "linkedList.h";

/*
* Function will add a frame at the end of the list
* input: head, new_frame - pointer to the start of the list and the new frame
* output: none
*/
void addFrame(FrameNode** head, FrameNode* new_frame);

/*
* Function will delete all the gif
* input: head - the start of the gif
* output: none
*/
void deleteGif(FrameNode* head);

/*
* Function will delete a frame from the linked list
* input: head, frame_name - the start of the list and the name of the frame
* output: if the frame was deleted or not
*/
int deleteFrame(FrameNode* head, char* frame_name);

/*
* Function will change the index of a frame
* input: head, index - pointer to the start of the list and where to put the frame
* output: if the acction was succesful or not
*/
int changeFrameIndex(FrameNode** head, int index, char* frame_name);

/*
* Function will change the duration of a frame
* input: head, duration - pointer to the start of the list and the duration of the frame
* output: if the acction was succesful or not
*/
int changeFrameDuration(FrameNode** head, int duration, char* searched_frame);

/*
* Function will change the duration of all frames
* input: head, duration - pointer to the start of the list and the new duration
* output: if the acction was succesful or not
*/
int changeAllDurations(FrameNode** head, int duration);

#endif