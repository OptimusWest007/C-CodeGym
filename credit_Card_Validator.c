#include <stdio.h>
#include <stdlib.h>

    int main()
    {
        long long int creditCardNumber;
        printf("Please enter your credit card number: \n");
        scanf("%lld", &creditCardNumber);
        //conditional statements
        if (creditCardNumber<=1000000000000000)
        {
            printf("Your credit card number is invalid! Please Re-enter: \n");
            scanf("%lld", &creditCardNumber); /*reprompt though for loop missing :( */
        }
        else
            if (creditCardNumber<5555555555555555&&creditCardNumber>1000000000000000)
            {
                printf("Thank you for your co-operation :) \n");
            }
        else
        {
            printf("You have not entered anything! \n");
        }
        return 0;    
    }