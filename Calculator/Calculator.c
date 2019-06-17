/*
 * Calculator.c
 *
 *  Created on: Jun 17, 2019
 *      Author: satya.jain
 */

#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
#include "calc.h"

int main()
{
	int type; double second;
	char input[MAX_SIZE];
	while((type = getInput(input)) != EOF) {
		switch(type) {
		        case NUMBER:
				    push(atof(input));
				    break;
				case '+':
					push(pop() + pop());
					break;
				case '-':
				    second = pop();
				    push(pop() - second);
				    break;
				case '*':
				    push(pop() * pop());
				    break;
				case '/':
					second = pop();
					if (second == 0) {
						printf("divide by zero not possible");
						exit(1);
					}
					push(pop() / second);
					break;
				default:
					printf("unsupported operator  %d", type);
					exit(1);
		}

	}
	printf("%f", pop());

}

