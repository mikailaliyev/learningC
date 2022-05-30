/*
Author: Mikayil Aliyev
Program: Fahrenhite to Celsius converter
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mode;
    char proceed;
    float fahrenhiteTemp;
    float celsiusTemp;
    float result;

    while (proceed = 'y')
    {
        printf("Choose mode!\nto Celsius press c\nto Fahrenhite press f\n");
        scanf(" %c", &mode);

        if (mode == 'c')
        {
            printf("You choosed \"to Celsius\" mode!");
            printf("\nEnter Fahrenhite temperature you want to convert to Celsius!\n");
            scanf("%f", &fahrenhiteTemp);
            result = 5 * (fahrenhiteTemp - 32) / 9;
            printf("The result is: %.2fF\n", result);
            printf("Do you want to proceed?\n\"y\" or \"n\"\n");
            scanf(" %c", &proceed);
            if (proceed != 'y')
            {
                return printf("End of the program!");
            }
        }
        else if (mode == 'f')
        {
            printf("You choosed \"to Fahrenhite\" mode!");
            printf("\nEnter Celsius temperature you want to convert to Fahrenhite!\n");
            scanf("%f", &celsiusTemp);
            result = (celsiusTemp * 9 / 5) + 32;
            printf("The result is: %.2fC\n", result);
            printf("Do you want to proceed?\n\"y\" or \"n\"\n");
            scanf(" %c", &proceed);
            if (proceed != 'y')
            {
                return printf("End of the program!");
            }
        }
        else
        {   
            printf("You entered wrong character!\nDo you want to proceed?\n\"y\" or \"n\"\n");
            scanf(" %c", &proceed);
            if (proceed != 'y')
            {
                return printf("End of the program!");
            }
        }
    }
    return 0;
}