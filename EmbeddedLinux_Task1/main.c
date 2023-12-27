#include <stdio.h>
#include <stdlib.h>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "modulus.h"

int main ()
{
 double num1, num2, result;
char op;
 printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);
     printf("Enter the operation needed:\n ");
      scanf(" %c", &op);

     switch(op)
    {
    case '+':
    	result = addNumbers(num1, num2);
    	printf("The sum of %f and %f is: %f\n", num1, num2, result);
    	break;
    case '-':
    	result = sub(num1, num2);
    	printf("The subtraction of %f from %f is: %f\n", num2, num1, result);
       	break;
    case '*':
    	result = multi(num1, num2);
    	printf("The multiplication of %f and %f is: %f\n", num1, num2, result);
       	break;
    case '/':
    	result = division(num1, num2);
       	printf("The division of %f by %f is: %f\n", num1, num2, result);
    	break;
   case '%':
        result = modulus(num1, num2);
        printf("The modulus of %lf by %lf is: %lf\n", num1, num2, result);
        break;


    default:
    	printf("Not valid");
    }
  
    return 0;
}
