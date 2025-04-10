/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

double
spsound (double temp_c)
{
    double temp_f, spd_fps, spd_kph;
    
    temp_f = temp_c*(9/5) + 32;
    
    spd_fps = 1086*sqrt((5*temp_f + 297)/247);
    
    spd_kph = (spd_fps/3280.84)*3600;
    
    return(spd_kph);
}



int
main (void)
{
    double giventemp, spd;
    
    printf("What temperature is it in Celcius:\n");
    scanf("%lf", &giventemp);
    
  spd = spsound(giventemp);
    
    printf("Thank you!\nThe speed of sound at your given temperature is %lf Kilometers per hour.", spd);
    
    return(0);
    
}
