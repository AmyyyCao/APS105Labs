//Amy Cao 
// This program takes in a 4 digit integer abcd and returns it in the form d(9-b)(9-c)a

#include <stdio.h>

int main(void){
    
    int encryptedCombination;
    printf("Enter an encrypted 4-digit combination: ");
    scanf("%d", &encryptedCombination);
    
	// takes first placeholder of integer and returns it alone as a single integer
    int first = (int)((encryptedCombination) / 1000);
	
	// takes second placeholder of integer and finds 9s complement
    int second = 9 - (int)(((encryptedCombination) / 100) % 10);
	
	// takes third placeholder of integer and finds 9s complement
    int third = 9 - (int)(((encryptedCombination) / 10) % 10); 
	
	// takes fourth placeholder and returns it alone as a single integer
    int fourth = (int)((encryptedCombination) % 10); 
    
    
    printf("The real combination is: %d%d%d%d\n", fourth, second, third, first); 
}
