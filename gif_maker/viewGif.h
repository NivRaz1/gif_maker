#ifndef viewGif
#define viewGif

/*
* Function will list all the frames
* input: head - the start of the list
* output: the list of all the frames
*/
void listFrames(FrameNode* head);

/*
* Function will search for a frame by the name
* input: head, searched_frame - the start of the list and the name of the frame
* output: if the frame was found or not
*/
int FindFrame(FrameNode* head, char* searched_frame);

#endif