// Amy Cao 
// This program calculates the toal owed as well as compounded interest charges from purchases 

#include <stdio.h>
#include <stdlib.h>

//function prototype
double owedAmount(double interest, double owedFromPreviousMonth,
double purchases, double monthlyPayment);


int main(void){
	
	//variable definition
	double interest, owedFromPreviousMonth, purchases, monthlyPayment = 0.0; 
	double interestCharge = 0.0; 
	int month;
	
	printf("Enter amount already owed on card: ");
	scanf("%lf", &owedFromPreviousMonth);
	
	printf("Enter purchase amount per month: ");
	scanf("%lf", &purchases);
	
	printf("Enter payment amount per month: ");
	scanf("%lf", &monthlyPayment);
	
	printf("Enter yearly interest rate as percent: ");
	scanf("%lf", &interest);
	
	printf("Enter number of months to consider: ");
	scanf("%d", &month);
	
	//calculation for total purchase value 
	double totalPurchaseValue; 
	totalPurchaseValue = owedFromPreviousMonth + (purchases * month); 
	printf("Total purchased value: %.2lf\n", totalPurchaseValue);
	
	//declaring for loop
	int a;
	for(a = 0;a < month; a++){
		
		if (owedFromPreviousMonth != 0){
		
		interestCharge += ((owedFromPreviousMonth + purchases) * (interest / 1200));
		}
		
		owedFromPreviousMonth = owedAmount(interest / 1200, owedFromPreviousMonth, purchases, monthlyPayment);
	}
		
		printf("Total interest charges: %.2lf\n", interestCharge);
		
	return 0; 
	}

//function definition 
double owedAmount(double interest, double owedFromPreviousMonth,
double purchases, double monthlyPayment){
	
	double totalOwed;
	if(owedFromPreviousMonth > 0 || purchases > monthlyPayment){
		
		totalOwed = (owedFromPreviousMonth + purchases) + ((owedFromPreviousMonth + purchases) * interest) - monthlyPayment;
	}
	
	else if(owedFromPreviousMonth == 0 && purchases == 0){
		
		totalOwed = 0; 
	}
	
	if (totalOwed < 0){
		
		return 0; 
	}
	else{
		
		return totalOwed; 
	}

return 0; 

}
