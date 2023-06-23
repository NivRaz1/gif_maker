#ifndef valid
#define valid

/*
* Function will check if the file is on the computer or not
* input: path - the path to the file
* output: if the file is on the computer or not
*/
int checkPath(char* path);

/*
* Function will check if the duration is valid or not
* input: duration - the duration we are checking
* output: if the duration is valid or not
*/
int checkDuration(unsigned int duration);

/*
* Function will check if the index is at the right range or not
* input: index, head - the gif and the index
* output: if the index is valid or not
*/
int checkIndex(int index, FrameNode* head);

#endif