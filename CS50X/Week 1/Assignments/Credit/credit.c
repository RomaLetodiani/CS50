#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define AMEX_LENGTH 15
#define MASTERCARD_LENGTH 16

#define VISA_SHORT_LENGTH 13
#define VISA_LONG_LENGTH 16

int isValidCreditCCard(const char *cardNumber, int length)
{

    int sum = 0;

    for (int i = length - 2; i >= 0; i -= 2)
    {
        int digit = (cardNumber[i] - '0') * 2;
        sum += digit / 10 + digit % 10;
    }

    for (int i = length - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i] - '0';
    }

    return (sum % 10 == 0);
}

int main(void)
{
    char cardNumber[20];
    int i;

    // Prompt the user
    do
    {
        printf("Number: ");
        scanf("%s", cardNumber);

        // Check if the length is within bounds
        if (strlen(cardNumber) > 16 || strlen(cardNumber) < 13)
        {
            printf("INVALID\n");
            return 0; // Continue to next iteration of the loop
        }

        for (i = 0; cardNumber[i] != '\0'; i++)
        {
            if (!isdigit(cardNumber[i]))
            {
                printf("INVALID\n");
                return 0; // Continue to next iteration of the loop
            }
        }
    }
    while (strlen(cardNumber) > 16 || cardNumber[0] == '\0' || i < strlen(cardNumber));

    int length = strlen(cardNumber);
    if (isValidCreditCCard(cardNumber, length))
    {
        if ((length == VISA_SHORT_LENGTH || length == VISA_LONG_LENGTH) && cardNumber[0] == '4')
        {
            printf("VISA\n");
            return 0;
        }

        if ((length == MASTERCARD_LENGTH) && cardNumber[0] == '5' &&
            (cardNumber[1] >= '1' && cardNumber[1] <= '5'))
        {
            printf("MASTERCARD\n");
            return 0;
        }

        if ((length == AMEX_LENGTH) &&
            (cardNumber[0] == '3' && (cardNumber[1] == '4' || cardNumber[1] == '7')))
        {
            printf("AMEX\n");
            return 0;
        }
    }
    printf("INVALID\n");
}
