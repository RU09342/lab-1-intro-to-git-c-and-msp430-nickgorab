/*
	Author: 		Nick Gorab
	Created:		9/7/2017
	Last Edited:	9/8/2017
*/


#include "math.h"		// References the provided header file. 
#include <stdio.h>		// Uses standard stdio header file.

int math(int num1, int num2, char Operator)
{
switch(Operator) {

	case '+'	:               // Addition 
		return num1 + num2;
		break;

	case '-'	:               // Subtration
		return num1 - num2;
		break;

	case '*'	:               // Multiplication
		return num1 * num2;
		break;

	case '/'	:               // Divison
		if (num2 == 0) {
			printf("%s\n","Cannot divide by zero." );		// Checks to make sure there isn't any division by zero. 
		} else {
			return num1 / num2;
		}
		break;

	case '%'	:				// Modulo 
		return num1 % num2;
		break;

	default		:				// Default case if unsupported character is entered
		printf("Unsupported Command\n");
		break;
	}

return 0;
}