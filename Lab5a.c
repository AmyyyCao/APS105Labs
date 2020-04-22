// Amy Cao 
// This program finds the pair divisors of a number

#include <stdio.h>
#include <stdbool.h>

void getPairDivisor(int n, int q, int *mAddress, int *pAddress){
	
	int m;
	int p;
	
	bool found = false;
	for(m=1; m<=n; m++){
		if(n%m == 0){
			p = n/m;
			if(m+p == q){
				mAddress = &m;
				pAddress = &p;
				printf("m = %d, p = %d, m*p = %d, and m+p = %d\n", m, p, m*p, m+p);
				found = true;
				break;
			}
		}
	}
	
	if (!found){
		printf("The program could not find any pair divisors for these inputs\n");
	}
}

int main(void){
	
	int n, q, *mAddress, *pAddress, m, p;
	
	mAddress = &m;
	pAddress = &p;
	
	printf("Please enter an input number n: ");
	scanf("%d", &n);
	
	printf("Please enter a query number q: ");
	scanf("%d", &q);
	
	getPairDivisor(n, q, *mAddress, *pAddress);
	
	return 0;
}


