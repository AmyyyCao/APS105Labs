// Amy Cao 
// This program calculates the monthly payment of a loan


#include <stdio.h>
#include <math.h>

int main(void){
    
    int P;
    printf("Enter the purchase price P: ");
    scanf("%d", &P);
    
    int D;
    printf("Enter the amount of down payment D: ");
    scanf("%d", &D);
    
    int n;
    printf("Enter the finance term (in months): "); 
    scanf("%d", &n);
    
    float r;
    printf("Enter the monthly interest rate (in percent): ");
    scanf("%f", &r);
    
	// calculates and displays value of M, monthly payment, from given formula
    float M;
    M = ((P-D) * (r/100) * (pow((1+(r/100)), n))) / ((pow((1+(r/100)), n)) - 1); 
    printf("\nThe monthly payment is: %.2f\n", M);
    
    return 0; 
}
