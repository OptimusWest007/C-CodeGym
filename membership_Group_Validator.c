//program to find out the membership level in a society

#include <stdio.h>
#include <stdlib.h>

    int main()
    {
        int memberNumber; //create member number variable
        printf("Please enter your membership reg. no: \n");
        scanf("%d", &memberNumber); //ask the user for input
        //conditional statements for input from user
        
        if (memberNumber<=100)
        {
           printf("Your are in member group A \n");
        }
        else
            if (memberNumber<=150)
            {
                printf("You are in member group B \n");          }
        else
                    if (memberNumber<=200)
                    {
                        printf("You are in member group C \n");       }
        else
                        {
                            printf("You are not a member \n");
                    }
            
 return 0;          
        }
               
    