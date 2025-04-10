/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

double
trvlmn (int spd, double *tmin)
{
    double tmax;
    
    *tmin = 363104/spd;
    tmax = 405696/spd;
    
    return(tmax);
}

double
trvlmrs (int spd, double *tmin)
{
    double tmax;
    
    *tmin = 54600000/spd;
    tmax = 401000000/spd;
    
    return(tmax);
}

double
trvlvns (int spd, double *tmin)
{
    double tmax;
    
    *tmin = 38000000/spd;
    tmax = 261000000/spd;
    
    return(tmax);
}


int main()
{
    int option, speed;
    double maxtime, mintime;
    
    do
    {
    printf("Hello! Where will you be travelling?\n\n");
    printf("1. Travveling to the Moon\n2. Travveling to Mars\n3. Travelling to venus\n4. Exit program\n\n");
    scanf("%d", &option);
    if (option==4)
    break;
    else
    {
        printf("\n\nEnter your speed of travel (in km/h):\n");
        scanf("%d", &speed);
    }
    
    if(option==1)
    maxtime = trvlmn(speed, &mintime);
    else 
    if(option==2)
    maxtime = trvlmrs(speed, &mintime);
    else
    maxtime = trvlvns(speed, &mintime);
    
    printf("\nYour minimum travel time is %lf hours and your maximum travel time is %lf hours.\n\n\n", mintime, maxtime);
    
    
    } while(option !=4);
    
    return 0;
}
