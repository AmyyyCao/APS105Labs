// Amy Cao
// This program calculates the total charge and free days a user will receive
#include <stdio.h>

int main(void){

    // 13% HST tax is a constant variable
    #define tax 1.13;
    
    float dailyRate;
    printf("Enter the daily rate: ");
    scanf("%f", &dailyRate);
    
    int rentalPeriod;
    printf("Enter the rental period (in days): ");
    scanf("%d", &rentalPeriod);
    
    // typecasting brings amount of free days to a whole number
    float freeDays;
    freeDays = rentalPeriod / 4;
    printf("\nYour total free day(s) in this rental is: %d", (int)freeDays);
    
    int chargedDays;
    chargedDays = rentalPeriod - (int)freeDays;
    
    //calculates total charge 
    float totalCharge;
    totalCharge = chargedDays * dailyRate * tax;
    
    printf("\nThe total charge including taxes is: %.2f\n", totalCharge);
    
    return 0;
}
