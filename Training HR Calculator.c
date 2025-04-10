/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int 
main(void)
{
double age, MHR, RHR, INTEN;
int THR;
char gender, lvl;

printf("Hello!\nPlease enter your gender below ('M' for male, and 'F' for female):\n");
scanf("%c", &gender);

printf("Thank you!\nNow please enter your age:\n");
scanf("%lf", &age);


if (gender == 'M')
    MHR = 203.7/(1 + exp((0.033)*(age - 104.3)));
    else
    if (gender == 'F')
        MHR = 190.2/(1 + exp((0.0453)*(age - 107.5)));
        else
            printf("You entered an invalid input.");

printf("Thank you!\nNow please enter your resting heart rate in bpm:\n");
scanf(" %lf", &RHR);

printf("Thank you!\nNow enter the fitness level of your activity (type 'L' for low, 'M' for medium, and 'H' for high):\n");
scanf(" %c", &lvl);

if (lvl == 'L')
    INTEN = 0.55;
    else
    if (lvl == 'M')
     INTEN = 0.65;
     else
     if (lvl == 'H')
        INTEN = 0.8;
        else
            printf("You entered an invalid input.");

THR = (MHR - RHR) * INTEN + RHR;

printf("Thank you!\nYour training heart rate is %i.", THR);
    
    return 0;
}