#include <stdio.h>	// Uses the standard stdio header file. 
#include "math.h"	// Uses the provided header file.

int main() {

int num1;	//Decleration of integers
int num2;
char op;


printf("\nEnter first number: ");			// Takes user input for the first number.
scanf("%d",&num1);

printf("\nEnter second number: ");			// Takes user input for the second number.
scanf("%d",&num2);

printf("\nEnter operator (+,-,*,/,%): ");	// Takes use input for the operator. 
scanf(" %c",&op);

int solution = math( num1, num2, op);		// Uses math() function to determine solution
printf("The solution is %d", solution);		// Printing out the solution

return 0;
};