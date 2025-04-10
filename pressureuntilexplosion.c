#include <stdio.h>

int main(void)
{
	double tempc, tempk , atmf;
	char deg = '\xA7';
	
	tempc = 0.0;
	
	printf("The maximum pressure the cylinder (containing explosive hydrogen gas) can withstand is 500 atm before exploding.\n\n");
	
	printf("Tempurature(%cC)     Tempurature(%cK)       Pressure(atm)\n", deg, deg);
	printf("_______________     _______________       _____________\n\n");
	
	do
	{
		tempk = tempc + 273.15;
		
		atmf = tempk*(50.0/300.0);
		
		
		printf("%8.2lf            %8.2lf             %8.3lf\n", tempc, tempk, atmf);
		
		tempc = tempc + 250;
		
		
	} while(atmf <= 500);
	
	printf(" KABOOM!\n\nThe cylinder has exploded due to high pressure.\n");
	
	return(0);
}