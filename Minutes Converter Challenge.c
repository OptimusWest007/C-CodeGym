#include <stdio.h>

int main()
{
	int minutes;
	printf("Enter the number of minutes: \n");
	scanf("%d", &minutes);
	
	float minutes_in_year = 60 * 24 * 365;
	float min_to_days = minutes / 1440;
	float min_to_year = minutes / minutes_in_year;
	printf("The number of minutes you entered is %d \n", minutes);
	
	printf("The number of minutes you entered converted to days is %f and to years is %f \n", min_to_days, min_to_year);
	
	return 0;
}