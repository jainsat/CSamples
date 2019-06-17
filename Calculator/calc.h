/*
 * calc.h
 *
 *  Created on: Jun 17, 2019
 *      Author: satya.jain
 */

#ifndef CALC_H_
#define CALC_H_

#define NUMBER '0'

int getch(void);
void ungetch(char ch);
int getInput(char input[]);
void push(double);
double pop(void);

#endif /* CALC_H_ */
