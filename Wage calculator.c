#include <stdio.h>

int
main(void)
{
	FILE *logs;
	int emp, shi, x;
	double bwr, hrs, totalpay, totalhrs;
	
	logs = fopen("L4_data.txt", "r");
	
    
    printf("Employee #          Total Hours          Gross Pay\n");
    printf("__________________________________________________\n");
	
	while(!feof(logs))
	{
		
		totalpay = 0;
		totalhrs = 0;
		fscanf(logs, "%d", &emp);
		fscanf(logs, "%d", &shi);
		fscanf(logs, "%lf", &bwr);
		for(x = shi ; x>0 ; x = x-1)
		{
			fscanf(logs, "%lf", &hrs);
			totalhrs = totalhrs + hrs;
		}
		
		if(feof(logs) == EOF)
		break;
		
		if(totalhrs >15 && totalhrs <=25)
		totalpay = totalhrs*(bwr*1.05);
		else 
		if(totalhrs>25)
		totalpay = totalhrs*(bwr*1.1);
		else
		totalpay = totalhrs*bwr;
		
	if(feof(logs))
	break;
		
		printf("  %d              %5.2lf               %0.2lf\n", emp, totalhrs, totalpay);
		
	} 
	
	
	fclose(logs);
	
	printf("\n");
	
	return (0);
}