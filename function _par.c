#include <stdio.h>

//function declaration
double cube(double num);
int main()
	{
		double num1;
		printf("Enter a number to find its cube: \n");
		scanf("%lf", &num1);
		printf("%lf", cube(num1));
		return 0;
	}
//function definition
double cube(double num){
	double numcube = num * num * num;
	return numcube;
}


