/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double 
calc (int num1, int num2, double *sum, double *absqr, double *sqrsum)
{
    double avg;
    avg = (num1 +num2)/2;
    *sum = (num1*num1)+(num2*num2);
    *absqr = abs((num1-num2)*(num1-num2));
    *sqrsum = sqrt(*sum);
    
    return(avg);
}


int 
main()
{
    double sm, ab, sq, av;
    int n1, n2;
    
    printf("Hello! Please enter a number:\n");
    scanf("%d", &n1);
    printf("\nThank you! Now please enter another number:\n");
    scanf("%d", &n2);
    
    av = calc(n1, n2, &sm, &ab, &sq);
    
    printf("\nThank you!\n\nThe average of the two numbers is %.2lf\n", av);
    printf("The sum of the squares of the two numbers is %.2lf\n", sm);
    printf("The absolute value of the square of the difference between the two numbers is %.2lf\n", ab);
    printf("The square root of the sum of the squares of the two numbers %.2lf\n", sq);
    

    return 0;
}