#ifndef savedGif
#define savedGif

/*
* Function will save the gif in the user's computer
* input: head, file_path - the start of the list and where to save the gif
* output: none
*/
void saveGif(FrameNode* head, char* file_path);

/*
* Function will load an existing gif
* input: file_path - where the gif saved
* output: the linked list of the gif
*/
FrameNode* loadGif(char* file_path);

#endif