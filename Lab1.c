//Amy Cao
// purpose: from 3 user entered values, find negative of 1st number, value preceding second number, and product of 2nd and 3rd number
#include <stdio.h>

int main(void)
{
	//Defines input numbers as integers
	int inputNumber1, inputNumber2, inputNumber3;
	
	//Gives instructions for users, receives input as integer and assigns to corresponding variables
	printf("Enter First Number: ");
	scanf(" %d", &inputNumber1);
	
	printf("Enter Second Number: ");
	scanf(" %d", &inputNumber2);
	
	printf("Enter Third Number: ");
	scanf(" %d", &inputNumber3);
	
	//Defines and prints sum of all numbers, negayive of 1st number,
	// value preceding 2nd number, and product of 2nd and 3rd number
	int Sum;
	Sum = inputNumber1 + inputNumber2 + inputNumber3;
	printf("Sum: %d", Sum);
	
	int negatedNumber; 
	negatedNumber = inputNumber1 * -1;
	printf("\nFirst negated: %d", negatedNumber);
	
	int numberTwo;
	numberTwo = inputNumber2 + 1;
	printf("\nAfter number 2: %d", numberTwo);
	
	int prodNumberTwoAndThree;
	prodNumberTwoAndThree = inputNumber2 * inputNumber3; 
	printf("\nProduct of Number 2 and Number 3: %d\n", prodNumberTwoAndThree);
	
	return 0; 
	
}