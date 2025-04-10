#include <stdio.h>
#include "mylibrary.h"

int main()
{
    FILE* nums;
    FILE* resw;
    FILE* resr;
    double x, res1, res2, res3, res4, res5, something;
    double values[10][10];
    int i=0, j=0;
    
    nums = fopen("L8_real.txt", "r");
    resw = fopen("results.bin", "wb");
    
    while(fscanf(nums, "%lf", &x)==1&&j<10)
    {
        values[i][j]=x;
        i++;
        if(i==10)
        {
            j++;
            i=0;
        }
        
    }
    
    fclose(nums);
    
    res1 = diag(values, 10);
    res2 = total(values, 10, 10);
    res3 = lstavg(values, 10, 10);
    res4 = corners(values, 10, 10);
    res5 = large(values, 10, 10);
    
    fwrite(&res1, sizeof(double), 1, resw);
    fwrite(&res2, sizeof(double), 1, resw);
    fwrite(&res3, sizeof(double), 1, resw);
    fwrite(&res4, sizeof(double), 1, resw);
    fwrite(&res5, sizeof(double), 1, resw);
    
    fclose(resw);
    
    resr = fopen("results.bin", "rb");
    
    printf("RESULTS:");
    fread(&something, sizeof(double), 1, resr);
    printf("\n\nThe sum of the diagonal of the array is %.1lf.", something);
    fread(&something, sizeof(double), 1, resr);
    printf("\nThe sum of the entire array is %.1lf.", something);
    fread(&something, sizeof(double), 1, resr);
    printf("\nThe average of the rightmost column in the array is %.2lf.", something);
    fread(&something, sizeof(double), 1, resr);
    printf("\nThe sum of the four corners of the array is %.1lf.", something);
    fread(&something, sizeof(double), 1, resr);
    printf("\nThe largest number in the antidiagonal of the array is %.1lf.", something);
    
    fclose(resr);
    
    return 0;
}
