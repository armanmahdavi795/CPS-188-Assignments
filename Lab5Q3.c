/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int 
srfa(int b1, int b2, int h, double *sa)
{
    *sa = h*(b1+b2)/2;
    return(0);
}


int main()
{
    int lb, sb, hght, conf = 1;
    double area;
    
    while (conf==1)
    {
    printf("Hello! What is the value of the short base:\n");
    scanf("%d", &sb);
    printf("\nThank you! What is the value of the long base:\n");
    scanf("%d", &lb);
    printf("\nThank you! What is the value of the height:\n");
    scanf("%d", &hght);
    
    if (sb<=0 || lb<=0 || hght<=0)
    {
        printf("\nUh oh... it seems one of your inputted values were invalid.\nTry again and ensure no values are 0 or below.\n\n\n");
    }
    else
    {
    srfa(sb, lb, hght, &area);
    conf = 0;
    printf("\nThank you! The surface area of the trapezoid is %.2lf units squared.\n", area);
    }
    }

    return 0;
}
