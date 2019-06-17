/*
 * InputReader.c
 *
 *  Created on: Jun 17, 2019
 *      Author: satya.jain
 */
#include<ctype.h>
#include<stdio.h>
#include "calc.h"

int getInput(char inp[])
{
	char ch;
    while((inp[0]=ch=getch()) == ' ' || inp[0] == '\t');
    //printf("char %c", ch);
    if (!isdigit(ch) && ch != '.' && ch != '\n') {
       	return ch;
    }
    int i =0;
    if (isdigit(ch)) {
    	    while(isdigit((ch=inp[++i]=getch())));
    	    //printf("%s first ",inp);
    }
    if (ch=='.') {
	    while(isdigit((ch=inp[++i]=getch())));
	   // printf("%s second ",inp);


    }

    inp[i]='\0';

    if (ch != '\n') {
    	    ungetch(ch);
    	    //printf("%s third",inp);
    	    return NUMBER;

    }
    else {
   // 	printf("return eof");
    	return EOF;
    }


}


