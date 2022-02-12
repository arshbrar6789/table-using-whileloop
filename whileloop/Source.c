#include<stdio.h>

int main()
{
	int x;
	float c, a;  // here declared 2 variables of float type 
	x = 1;
	printf("Write the number for which u want a table:"); // here we ask user which no. table they want
	scanf_s("%f", &a);
	printf("upto what number u want a table:"); 
	scanf_s("%f", &c);

	while (x <= c)
	{
		printf("%f*%d=%f\n", a, x, a * x); // here is the formula of the number

		x++;

	}


	return(0);

}