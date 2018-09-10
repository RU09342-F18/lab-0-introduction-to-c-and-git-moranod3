To use the math.c file the user must first include the math.h file in the main file by using the #include command. It would look something like:

        #include "math.h"
        
  The math.c file does not need to be included in the the main file. This is due to how the include command works, how declarations work, and how object creation during compiling works. The include command is especially interesting since in essence it pastes a copy of the included file starting from the same line as the include command.
        
        A really cool exercise to observe this is too make a file called openBracket.c and simply populate it with a single "{" (open bracket). What this allows you to do is type #include openbracket.c whenever you need an open bracket. 
        
To actually use the math function after including the header file the user would simply call the function and input the correct order of parameters. Which is num1, num2, and then operator. The numbers are of type int and the operator is a char. An example of how to utilize the function would be:

            Format: math(int num1, int num2, char operator); //This line would simply return the output of the math function and have no where to store it given that the variables are given values. 

            printf("%d", math(10,2, '/'));   // This line prints the return or output of the function  
            
            int modulo = math(10,3,'%');     // This line returns the output of the function and stores it into a variable named modulo that is of type int.
            
What this line does is print the return of the math function which in this case is the determined by dividing 10 by 2. The following are the different char to put for each operation.

        '+' Add 
         '-' Subtract 
        '*' Multiply 
        '/' Divide 
        '%' Modulus 
         '<' Left Shift 
        '>' Right Shift 
        '&' Bitwise AND 
         '|' Bitwise OR 
        '^' Bitwise XOR 
        '~' Bitwise Inverse 
