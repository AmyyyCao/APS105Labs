// Amy Cao
// The purpose of his lab is to calculate resistor value 


#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    // b1r1 stands for band 1 resistor 1
    char b1r1;
    printf("Please enter the 1st band of resistor 1: \n");
    scanf(" %c", &b1r1);
    
    char b2r1;
    printf("Please enter the 2nd band of resistor 1: \n");
    scanf(" %c", &b2r1);
    
    //mbr1 stands for multiplier band resistor 1
    char mbr1;
    printf("Please enter the multiplier band of resistor 1: \n");
    scanf(" %c", &mbr1);
    
    char tbr1;
    printf("Please enter the tolerance band of resistor 1: \n");
    scanf(" %c", &tbr1);
    
    char b1r2;
    printf("Please enter the 1st band of resistor 2: \n");
    scanf(" %c", &b1r2);
    
    char b2r2;
    printf("Please enter the 2nd band of resistor 2: \n");
    scanf(" %c", &b2r2);
    
    char mbr2;
    printf("Please enter the multiplier band of resistor 2: \n");
    scanf(" %c", &mbr2);
    
    char tbr2;
    printf("Please enter the tolerance band of resistor 2: \n");
    scanf(" %c", &tbr2);

printf("\nColour bands for resistor 1: \n");

//declares variable for band 1 of resistor 1 to be used in calculations later
int b1r1Value; 

// displays colours for band 1 resistor 1
switch (b1r1){
    case'K':
    b1r1Value = 0;
    printf("Black");
    break;
    
    case'k':
    b1r1Value = 0;
    printf("Black");
    break;
    
    case'B':
    b1r1Value = 1;
    printf("Brown");
    break;
    
    case'b':
    b1r1Value = 1;
    printf("Brown");
    break;
    
    case'R':
    b1r1Value = 2;
    printf("Red");
    break;
    
    case'r':
    b1r1Value = 2;
    printf("Red");
    break;
    
    case'O':
    b1r1Value = 3;
    printf("Orange");
    break;
    
    case'o':
    b1r1Value = 3;
    printf("Orange");
    break;
    
    case'E':
    b1r1Value = 4;
    printf("Yellow");
    break;
    
    case'e':
    b1r1Value = 4;
    printf("Yellow");
    break;
    
    case'G':
    b1r1Value = 5;
    printf("Green");
    break;
    
    case'g':
    b1r1Value = 5;
    printf("Green");
    break;
    
    case'U':
    b1r1Value = 6;
    printf("Blue");
    break;
    
    case'u':
    b1r1Value = 6;
    printf("Blue");
    break;
    
    case'V':
    b1r1Value = 7;
    printf("Violet");
    break;
    
    case'v':
    b1r1Value = 7;
    printf("Violet");
    break;
    
    case'Y':
    b1r1Value = 8;
    printf("Grey");
    break;
    
    case'y':
    b1r1Value = 8;
    printf("Grey");
    break;
    
    case'W':
    b1r1Value = 9;
    printf("White");
    break;
    
    case'w':
    b1r1Value = 9;
    printf("White");
    break;
    
    default:
    printf("\nInvalid colour for the 1st band of resistor 1. Exiting the program...\n");
    exit(0);
    }
    
    //declares variable for band 2 of resistor 1 to be used in calculations later
    
    int b2r1Value; 
    
    //colours for 2nd band of resistor 1
switch (b2r1){
    case'K':
    b2r1Value = 0;
    printf(" Black");
    break;
    
    case'k':
    b2r1Value = 0;
    printf(" Black");
    break;
    
    case'B':
    b2r1Value = 1;
    printf(" Brown");
    break;
    
    case'b':
    b2r1Value = 1;
    printf(" Brown");
    break;
    
    case'R':
    b2r1Value = 2;
    printf(" Red");
    break;
    
    case'r':
    b2r1Value = 2;
    printf(" Red");
    break;
    
    case'O':
    b2r1Value = 3;
    printf(" Orange");
    break;
    
    case'o':
    b2r1Value = 3;
    printf(" Orange");
    break;
    
    case'E':
    b2r1Value = 4;
    printf(" Yellow");
    break;
    
    case'e':
    b2r1Value = 4;
    printf(" Yellow");
    break;
    
    case'G':
    b2r1Value = 5;
    printf(" Green");
    break;
    
    case'g':
    b2r1Value = 5;
    printf(" Green");
    break;
    
    case'U':
    b2r1Value = 6;
    printf(" Blue");
    break;
    
    case'u':
    b2r1Value = 6;
    printf(" Blue");
    break;
    
    case'V':
    b2r1Value = 7;
    printf(" Violet");
    break;
    
    case'v':
    b2r1Value = 7;
    printf(" Violet");
    break;
    
    case'Y':
    b2r1Value = 8;
    printf(" Grey");
    break;
    
    case'y':
    b2r1Value = 8;
    printf(" Grey");
    break;
    
    case'W':
    b2r1Value = 9;
    printf(" White");
    break;
    
    case'w':
    b2r1Value = 9;
    printf(" White");
    break;
    
    default:
    printf("\nInvalid colour for the 2nd band of resistor 1. Exiting the program...\n");
    exit(0);
    }   
    
    //declares multiplier band values to be stored as an int
    float multiplierBandValue1;

    
    //colours for multiplier band of resistor 1
switch (mbr1){
    case'K':
    multiplierBandValue1 = 1;
    printf(" Black");
    break;
    
    case'k':
    multiplierBandValue1 = 1;
    printf(" Black");
    break;
    
    case'B':
    multiplierBandValue1 = 10;
    printf(" Brown");
    break;
    
    case'b':
    multiplierBandValue1 = 10;
    printf(" Brown");
    break;
    
    case'R':
    multiplierBandValue1 = 100;
    printf(" Red");
    break;
    
    case'r':
    multiplierBandValue1 = 100;
    printf(" Red");
    break;
    
    case'O':
    multiplierBandValue1 = 1000;
    printf(" Orange");
    break;
    
    case'o':
    multiplierBandValue1 = 1000;
    printf(" Orange");
    break;
    
    case'E':
    multiplierBandValue1 = 10000;
    printf(" Yellow");
    break;
    
    case'e':
    multiplierBandValue1 = 10000;
    printf(" Yellow");
    break;
    
    case'G':
    multiplierBandValue1 = 100000;
    printf(" Green");
    break;
    
    case'g':
    multiplierBandValue1 = 100000;
    printf(" Green");
    break;
    
    case'U':
    multiplierBandValue1 = 1000000;
    printf(" Blue");
    break;
    
    case'u':
    multiplierBandValue1 = 1000000;
    printf(" Blue");
    break;
    
    case'V':
    multiplierBandValue1 = 10000000;
    printf(" Violet");
    break;
    
    case'v':
    multiplierBandValue1 = 10000000;
    printf(" Violet");
    break;
    
    case'L':
    multiplierBandValue1 = 0.1;
    printf(" Gold");
    break;
    
    case'l':
    multiplierBandValue1 = 0.1;
    printf(" Gold");
    break;
    
    case'S':
    multiplierBandValue1 = 0.01;
    printf(" Silver");
    break;
    
    case's':
    multiplierBandValue1 = 0.01;
    printf(" Silver");
    break;
    
    default:
    printf("\nInvalid colour for the multiplier band of resistor 1. Exiting the program...\n");
    exit(0);
    }
    
    //declares variable to display tolerance band of resistor 1
    float toleranceBandValue1;
    
    //colours for the tolerance band of resistor 1
switch (tbr1){
    
    case'B':
    toleranceBandValue1 = 1;
    printf(" Brown");
    break;
    
    case'b':
    toleranceBandValue1 = 1;
    printf(" Brown");
    break;
    
    case'R':
    toleranceBandValue1 = 2;
    printf(" Red");
    break;
    
    case'r':
    toleranceBandValue1 = 2;
    printf(" Red");
    break;
    
    case'G':
    toleranceBandValue1 = 0.5;
    printf(" Green");
    break;
    
    case'g':
    toleranceBandValue1 = 0.5;
    printf(" Green");
    break;
    
    case'U':
    toleranceBandValue1 = 0.25;
    printf(" Blue");
    break;
    
    case'u':
    toleranceBandValue1 = 0.25;
    printf(" Blue");
    break;
    
    case'V':
    toleranceBandValue1 = 0.10;
    printf(" Violet");
    break;
    
    case'v':
    toleranceBandValue1 = 0.10;
    printf(" Violet");
    break;
    
    case'Y':
    toleranceBandValue1 = 0.05;
    printf(" Grey");
    break;
    
    case'y':
    toleranceBandValue1 = 0.05;
    printf(" Grey");
    break;
    
    case'L':
    toleranceBandValue1 = 5;
    printf(" Gold");
    break;
    
    case'l':
    toleranceBandValue1 = 5;
    printf(" Gold");
    break;
    
    case'S':
    toleranceBandValue1 = 10;
    printf(" Silver");
    break;
    
    case's':
    toleranceBandValue1 = 10;
    printf(" Silver");
    break;
    
    default:
    printf("\nInvalid colour for the tolerance band of resistor 1. Exiting the program...\n");
    exit(0);
    }
    
    //declares variable for band 1 resistor 2 to be used in calculations later
    int b1r2Value;
    
printf("\nColour bands for resistor 2: \n");

    //displays colours for band 1 resistor 2
switch (b1r2){
    case'K':
    b1r2Value = 0;
    printf("Black");
    break;
    
    case'k':
    b1r2Value = 0;
    printf("Black");
    break;
    
    case'B':
    b1r2Value = 1;
    printf("Brown");
    break;
    
    case'b':
    b1r2Value = 1;
    printf("Brown");
    break;
    
    case'R':
    b1r2Value = 2;
    printf("Red");
    break;
    
    case'r':
    b1r2Value = 2;
    printf("Red");
    break;
    
    case'O':
    b1r2Value = 3;
    printf("Orange");
    break;
    
    case'o':
    b1r2Value = 3;
    printf("Orange");
    break;
    
    case'E':
    b1r2Value = 4;
    printf("Yellow");
    break;
    
    case'e':
    b1r2Value = 4;
    printf("Yellow");
    break;
    
    case'G':
    b1r2Value = 5;
    printf("Green");
    break;
    
    case'g':
    b1r2Value = 5;
    printf("Green");
    break;
    
    case'U':
    b1r2Value = 6;
    printf("Blue");
    break;
    
    case'u':
    b1r2Value = 6;
    printf("Blue");
    break;
    
    case'V':
    b1r2Value = 7;
    printf("Violet");
    break;
    
    case'v':
    b1r2Value = 7;
    printf("Violet");
    break;
    
    case'Y':
    b1r2Value = 8;
    printf("Grey");
    break;
    
    case'y':
    b1r2Value = 8;
    printf("Grey");
    break;
    
    case'W':
    b1r2Value = 9;
    printf("White");
    break;
    
    case'w':
    b1r2Value = 9;
    printf("White");
    break;
    
    default:
    printf("\nInvalid colour for the 1st band of resistor 2. Exiting the program...\n");
    exit(0);
    }
    
    //declares variable for band 2 of resistor 2 to be used in calculations later
    int b2r2Value;
    
    //colours for 2nd band of resistor 2
    switch (b2r2){
    case'K':
    b2r2Value = 0;
    printf(" Black");
    break;
    
    case'k':
    b2r2Value = 0;
    printf(" Black");
    break;
    
    case'B':
    b2r2Value = 1;
    printf(" Brown");
    break;
    
    case'b':
    b2r2Value = 1;
    printf(" Brown");
    break;
    
    case'R':
    b2r2Value = 2;
    printf(" Red");
    break;
    
    case'r':
    b2r2Value = 2;
    printf(" Red");
    break;
    
    case'O':
    b2r2Value = 3;
    printf(" Orange");
    break;
    
    case'o':
    b2r2Value = 3;
    printf(" Orange");
    break;
    
    case'E':
    b2r2Value = 4;
    printf(" Yellow");
    break;
    
    case'e':
    b2r2Value = 4;
    printf(" Yellow");
    break;
    
    case'G':
    b2r2Value = 5;
    printf(" Green");
    break;
    
    case'g':
    b2r2Value = 5;
    printf(" Green");
    break;
    
    case'U':
    b2r2Value = 6;
    printf(" Blue");
    break;
    
    case'u':
    b2r2Value = 6;
    printf(" Blue");
    break;
    
    case'V':
    b2r2Value = 7;
    printf(" Violet");
    break;
    
    case'v':
    b2r2Value = 7;
    printf(" Violet");
    break;
    
    case'Y':
    b2r2Value = 8;
    printf(" Grey");
    break;
    
    case'y':
    b2r2Value = 8;
    printf(" Grey");
    break;
    
    case'W':
    b2r2Value = 9;
    printf(" White");
    break;
    
    case'w':
    b2r2Value = 9;
    printf(" White");
    break;
    
    default:
    printf("\nInvalid colour for the 2nd band of resistor 2. Exiting the program...\n");
    exit(0);
    }

//declares variable for multiplier band of resistor to be used in calculations    
float multiplierBandValue2; 

    //colours for multiplier band of resistor 2
switch (mbr2){
    case'K':
    multiplierBandValue2 = 1;
    printf(" Black");
    break;
    
    case'k':
    multiplierBandValue2 = 1;
    printf(" Black");
    break;
    
    case'B':
    multiplierBandValue2 = 10;
    printf(" Brown");
    break;
    
    case'b':
    multiplierBandValue2 = 10;
    printf(" Brown");
    break;
    
    case'R':
    multiplierBandValue2 = 100;
    printf(" Red");
    break;
    
    case'r':
    multiplierBandValue2 = 100;
    printf(" Red");
    break;
    
    case'O':
    multiplierBandValue2 = 1000;
    printf(" Orange");
    break;
    
    case'o':
    multiplierBandValue2 = 1000;
    printf(" Orange");
    break;
    
    case'E':
    multiplierBandValue2 = 10000;
    printf(" Yellow");
    break;
    
    case'e':
    multiplierBandValue2 = 10000;
    printf(" Yellow");
    break;
    
    case'G':
    multiplierBandValue2 = 100000;
    printf(" Green");
    break;
    
    case'g':
    multiplierBandValue2 = 100000;
    printf(" Green");
    break;
    
    case'U':
    multiplierBandValue2 = 1000000;
    printf(" Blue");
    break;
    
    case'u':
    multiplierBandValue2 = 1000000;
    printf(" Blue");
    break;
    
    case'V':
    multiplierBandValue2 = 10000000;
    printf(" Violet");
    break;
    
    case'v':
    multiplierBandValue2 = 10000000;
    printf(" Violet");
    break;
    
    case'L':
    multiplierBandValue2 = 0.1;
    printf(" Gold");
    break;
    
    case'l':
    multiplierBandValue2 = 0.1;
    printf(" Gold");
    break;
    
    case'S':
    multiplierBandValue2 = 0.01;
    printf(" Silver");
    break;
    
    case's':
    multiplierBandValue2 = 0.01;
    printf(" Silver");
    break;
    
    default:
    printf("\nInvalid colour for the multiplier band of resistor 2. Exiting the program...\n");
    exit(0);
    }
    
    //declares variable for tolerance band to be displayed later 
    float toleranceBandValue2;
    
    
    //colours for the tolerance band of resistor 2
switch (tbr2){
    
    case'B':
    toleranceBandValue2 = 1;
    printf(" Brown");
    break;
    
    case'b':
    toleranceBandValue2 = 1;
    printf(" Brown");
    break;
    
    case'R':
    toleranceBandValue2 = 2;
    printf(" Red");
    break;
    
    case'r':
    toleranceBandValue2 = 2; 
    printf(" Red");
    break;
    
    case'G':
    toleranceBandValue2 = 0.5;
    printf(" Green");
    break;
    
    case'g':
    toleranceBandValue2 = 0.5;
    printf(" Green");
    break;
    
    case'U':
    toleranceBandValue2 = 0.25;
    printf(" Blue");
    break;
    
    case'u':
    toleranceBandValue2 = 0.25;
    printf(" Blue");
    break;
    
    case'V':
    toleranceBandValue2 = 0.10;
    printf(" Violet");
    break;
    
    case'v':
    toleranceBandValue2 = 0.10;
    printf(" Violet");
    break;
    
    case'Y':
    toleranceBandValue2 = 0.05;
    printf(" Grey");
    break;
    
    case'y':
    toleranceBandValue2 = 0.05;
    printf(" Grey");
    break;
    
    case'L':
    toleranceBandValue2 = 5;
    printf(" Gold");
    break;
    
    case'l':
    toleranceBandValue2 = 5;
    printf(" Gold");
    break;
    
    case'S':
    toleranceBandValue2 = 10;
    printf(" Silver");
    break;
    
    case's':
    toleranceBandValue2 = 10;
    printf(" Silver");
    break;
    
    default:
    printf("\nInvalid colour for the tolerance band of resistor 2. Exiting the program...\n");
    exit(0);
    }
    
    
    printf("\nValue in ohms of resistor 1: \n");
    
    //calculates ohm value for resistor 1
    float OhmsResistor1 = (((b1r1Value * 10) + b2r1Value) * multiplierBandValue1);
    
    if(OhmsResistor1 < 1000){
        printf("%.2f Ohms +/- %.2f%%", OhmsResistor1, toleranceBandValue1);
    }
    else if(OhmsResistor1 >= 1000 && OhmsResistor1 < 1000000){
        printf("%.2f KOhms +/- %.2f%%", OhmsResistor1/1000, toleranceBandValue1);
    }
    else if(OhmsResistor1 >= 100000){
        printf("%.2f MOhms +/- %.2f%%", OhmsResistor1/1000000, toleranceBandValue1);
    }
    
    printf("\nValue in ohms of resistor 2: \n");
    
    //calculates ohm value for resistor 2
    float OhmsResistor2 = (((b1r2Value * 10) + b2r2Value) * multiplierBandValue2);
    
    if(OhmsResistor2 < 1000){
        printf("%.2f Ohms +/- %.2f%%\n", OhmsResistor2, toleranceBandValue2);
    }
    else if(OhmsResistor2 >= 1000 && OhmsResistor1 < 1000000){
        printf("%.2f KOhms +/- %.2f%%\n", OhmsResistor2/1000, toleranceBandValue2);
    }
    else if(OhmsResistor2 >= 100000){
        printf("%.2f MOhms +/- %.2f%%\n", OhmsResistor2/1000000, toleranceBandValue2);
    }
    
    //declares and prints equivalent in series 
    float seriesEquivalent = OhmsResistor1 + OhmsResistor2;
    
    if(seriesEquivalent < 1000){
        printf("\nThe Equivalent in series is %.2f Ohms\n", seriesEquivalent);
    }
    else if(seriesEquivalent >= 1000 && seriesEquivalent < 1000000){
        printf("\nThe Equivalent in series is %.2f KOhms\n", seriesEquivalent/1000);
    }
    else if(seriesEquivalent >= 1000000){
        printf("\nThe Equivalent in series is %.2f MOhms\n", seriesEquivalent/1000000);
    }
    
    //declares and prints equivalent in parallel
    float parallelEquivalent = (OhmsResistor1 * OhmsResistor2) / (OhmsResistor1 + OhmsResistor2);
    
    if(parallelEquivalent < 1000){
        printf("The Equivalent in parallel is %.2f Ohms\n", parallelEquivalent);
    }
    else if(parallelEquivalent >= 1000 && parallelEquivalent < 1000000){
        printf("The Equivalent in parallel is %.2f KOhms\n", parallelEquivalent/1000);
    }
    else if(parallelEquivalent >= 1000000){
        printf("The Equivalent in parallel is %.2f MOhms\n", parallelEquivalent/1000000);
    }
    
    
    return 0; 
}

   
