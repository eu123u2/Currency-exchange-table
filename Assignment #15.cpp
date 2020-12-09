/*Ezigbo Ugochukwu 10/29/2020 This program displays a graph of rubles to dollars*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	/*declare variables*/
	int counter=0, lines;
	float increment, dollars, rubles;
	
	/*get input values*/
	printf("Enter the rubles increment and the number of lines you want in the table:");
	scanf("%f %d", &increment, &lines);
	
	/*error checking*/
	while(lines<0 || increment<-10)
	{
		printf("Error; the increment must be greater than or equal to -10 and the numebr of lines must be a positive integer \n");
		printf("Enter a valid increment and number of lines");
		scanf("%f %d", &increment, &lines);
	}
	
	/*Calculate*/
	while(counter<lines)
	{
		rubles = 10 + (increment*counter);
		dollars = rubles / 79.18;
		printf("%.2f %.2f \n", rubles, dollars);
		counter++;
	}
	
	return 0;
}
/*Enter the rubles increment and the number of lines you want in the table:20 -2
Error; the increment must be greater than or equal to -10 and the numebr of lines must be a positive integer
Enter a valid increment and number of lines20 5
10.00 0.13
30.00 0.38
50.00 0.63
70.00 0.88
90.00 1.14*/

