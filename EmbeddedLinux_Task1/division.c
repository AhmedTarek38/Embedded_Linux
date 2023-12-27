#include <stdio.h>
#include "division.h"

//Division function
float division(float a, float b)
{
	while(b==0){
		printf("Can't divide by zero!\nPlease enter a different number");
		scanf("%f",&b);
	}
	return (a/b);
}
