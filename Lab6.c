//Amy Cao 
//This lab prints out the board of the game Minesweeper
#include <stdio.h>
#include "lab6.h" 

int main(void) {
  int m, n;
    double p; 
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    
    printf("Enter the probability p value: ");
    scanf("%lf", &p); 
    
    double array[m+2][n+2];

//prints dash lines
    int i;
    for(i=0; i<(n+(n-1)); i++){
        printf("-");
    }
    printf("\n");
    //makes top row 0
    int j; 
    for(j=0; j<n+1; j++){
        array[0][i]=0; 
    }
    //makes bottom row 0
    int k;
    for(k=0; k<n+1; k++){
        array[m+1][k]=0;
    }
    //makes first column 0
    int l;
    for(l=1; l<=m; l++){
        array[l][0]=0; 
    }
    //makes last column 0
    int a;
    for(a=1; a<=m; a++){
        array[a][n+1]=0;
    }
    
    //runs through loop for mines and safe spaces using values from header file 
    int b,c;
        for(b=1; b<=m; b++){
            for(c=1; c<=n; c++){
                array[b][c]=rand(); 
                if(array[b][c]<p){
                    printf("* ");
                    array[b][c]=1; 
                }
                else{
                    printf(". ");
                    array[b][c]=0; 
                }
            }
            printf("\n"); 
        }
      
    int d;
    for(d=0; d<(n+(n-1)); d++){
        printf("-");
    }
    printf("\n");

//compares values of array and stores mines found in second array 

    double sumArray[m+2][n+2];

int x,y; 
for(x=0; x<=m+2; x++){
  for(y=0; y<=n+2; y++){
    sumArray[x][y]=0; 
  }
}

    int e,f; 
    for(e=1; e<=m; e++){
      for(f=1; f<=n; f++){
        //sumArray[e][f]=0; 
        if (array[e][f] == 1){
          sumArray[e][f]=-1;
        }
        else if(array[e][f] == 0){
           if (array[e-1][f-1] == 1){
          sumArray[e][f]++; 
        }
        if (array[e-1][f] == 1){
          sumArray[e][f]++; 
        }
        if (array[e-1][f+1] == 1){
          sumArray[e][f]++; 
        }
        if (array[e][f-1] == 1){
          sumArray[e][f]++; 
        }
        if (array[e][f+1] == 1){
          sumArray[e][f]++; 
        }
        if (array[e+1][f-1] == 1){
          sumArray[e][f]++; 
        }
        if (array[e+1][f] == 1){
          sumArray[e][f]++; 
        }
        if (array[e+1][f+1] == 1){
          sumArray[e][f]++; 
        }
        }
      }
    }

    int g,h; 
        for(g=1; g<=m; g++){
            for(h=1; h<=n; h++){ 
                if(sumArray[g][h]==-1){
                    printf("* "); 
                }
                else{
                    printf("%d ", (int)sumArray[g][h]);
                }
            }
            printf("\n"); 
        }

    int z;
    for(z=0; z<(n+(n-1)); z++){
        printf("-");
    }
    printf("\n");
	
	return 0; 
}
