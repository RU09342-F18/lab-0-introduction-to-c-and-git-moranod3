#include "math.h"  // Include of the header file
#include <stdio.h> // Include the standard in out file for scanf and printf functions

int math(U16 num1, int num2, char Operator){
int out, choice; // out is used as the output of the function, choice is used when the inverse function is needed
switch (Operator)  //Switch case which is used to determine what operation to use
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
	scanf("%d", choice); // scanf to determine what number to inverse
	if (choice == 1){
		out = ~num1;
	}
	elseif (choice == 2){
		out = ~num2;
	}
	else{
		printf("%s", "ERROR");
	}
	break;
default:
	printf("%s" , "ERROR");
	break;
}
return out; //Return statement, this is the output of calling the function
}
