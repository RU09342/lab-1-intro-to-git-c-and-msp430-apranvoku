#include <stdio.h>
/*
Ardit Pranvoku
Takes two ints, a and b.
Depending on char c, which should be a character, does the corresponding operation.
*/
int Calculate(int a, int b, char c)
    {
        if (c == '+')
        {
            return a + b;
        }
    
        else if(c == '-')
        {
            return a - b;
        }
    
        else if(c == '*')
        {
            return a*b;
        }
         else if(c == '/')
        {
            return a/b;
        }
         else if(c == '%')
        {
            return a%b;
        }
        else
        printf("ERROR");
    }   

int main(void) {
	// your code goes here
	printf("%i", Calculate(10, 3, '+'));
	
	return 0;
}

