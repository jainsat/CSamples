/*
 * InputBufferReader.c
 *
 *  Created on: Jun 17, 2019
 *      Author: satya.jain
 */

#define MAX_BUFFER 100
static int buffer[MAX_BUFFER];
static int head = -1;
static int tail = -1;


int getch(void)
{
	//printf("head %d\n ", head);

	if (head == -1) {
		return getchar();
	}
	char res = buffer[head];
	if (head == tail) {
		head = tail = -1;
	}
	else {
		head = (head+1) % MAX_BUFFER;
	}
	//printf("res %d\n ", res);

	return res;

}

void ungetch(char ch)
{
	if ((tail+1) % MAX_BUFFER == head) {
		printf("buffer overflow.");
		return;
	}
	tail = (tail+1) % MAX_BUFFER;
	buffer[tail] = ch;
	if (head == -1) {
		head = tail;
	}

}
