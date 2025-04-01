#include <stdio.h>
#include <string.h>

int main()
{
    char county[25];
    printf("Enter the name of your county: \n");
    fgets(county, 25, stdin);
    county[strlen(county)-1] = '\0';
    
    
    while (strlen(county) == 0 && county[strlen(county)-1] == '\0')
    {
        printf("Enter the name of your county: \n");
        fgets(county, 25, stdin);
        county[strlen(county)-1] = '\0';
    }
    printf("Thank you! You come from %s \n", county);
    return 0;
}