/*
 * Stack.c
 *
 *  Created on: Jun 17, 2019
 *      Author: satya.jain
 */

#define MAX_SIZE 100
static int top = -1;
static double stack[MAX_SIZE];

void push(double num)
{
	if (top == MAX_SIZE - 1) {
      printf("stack overflow");
      return;
	}
	stack[++top] = num;
	//printf("pushed %f", num);
}

double pop(void)
{
	if (top==-1) {
		printf("stack empty");
		exit(1);
	}
	//printf("pop %f", stack[top]);
	return stack[top--];
}



