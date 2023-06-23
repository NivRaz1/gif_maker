#ifndef LINKEDLISTH
#define LINKEDLISTH

#define FALSE 0
#define TRUE !FALSE

// Frame struct
typedef struct Frame
{
	char*		name;
	unsigned int	duration;
	char*		path;  
} Frame;


// Link (node) struct
typedef struct FrameNode
{
	Frame* frame;
	struct FrameNode* next;
} FrameNode;

/*
* Function will create a new node
* input: none
* ouput: the new node
*/
FrameNode* createFrameNode();

/*
* Function will check the length of the list
* input: head - the list
* output: the length of the list
*/
int listLen(FrameNode* head);

#endif
