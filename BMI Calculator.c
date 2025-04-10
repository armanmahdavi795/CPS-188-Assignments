/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
double mass, height, BMI;


    printf("Hello!\nThis is a Body Mass Index calculator.\nDisclaimer:The BMI calculator does not apply to muscle builders, long distance athletes, pregnant women, the elderly or young children\n\nPlease enter your mass (in kilograms):\n");
    scanf("%lf", &mass);
    
    printf("Thank you!\nNow please enter your height (in meters):\n");
    scanf("%lf", &height);
    
    BMI = mass/(height*height);
    
    printf("Thank you!\n");
    
    if (BMI < 18.5)
        printf("Your Body Mass Index is %lf. Your BMI is classified as underweight.", BMI);
        else 
        if (BMI >= 18.5 && BMI <= 24.9)
            printf("Your Body Mass Index is %lf. Your BMI is classified as normal.", BMI);
            else
            if (BMI >= 25 && BMI <= 29.9)
                printf("Your Body Mass Index is %lf. Your BMI is classified as overweight.", BMI);
                else
                printf("Your Body Mass Index is %lf. Your BMI is classified as obese.", BMI);

    return 0;
}
