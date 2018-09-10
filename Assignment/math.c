#include "math.h"
#include <stdio.h>

int math(U16 num1, int num2, char Operator){
int out;
int choice;
switch (Operator)
{
case '+': 
	out = num1+num2;
	break;
case '-':
	out = num1-num2;
	break;
case '*':
	out = num1*num2;
	break;
case '/':
	out = num1/num2;
	break;
case '%':
	out = num1%num2;
	break;
case '<':
	out = num1 << num2;
	break;
case '>':
	out = num1 >> num2;
	break;
case '&':
	out = num1&num2;
	break;
case '|':
	out = num1|num2;
case '^':
	out = num1^num2;
	break;
case '~':
	scanf("%d", choice);
	if (choice == 1)
		out = ~num1;
	if (choice == 2)
		out = ~num2;
	break;
default:
	printf("%c" , "ERROR");
	break;
}
return out;
}
