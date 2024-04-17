#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    // Prompt the user for change owed, in cents
    do
    {
        n = get_int("Change owed: ");
    }
    while (n < 1);

    int res = 0;

    while (n > 0)
    {
        if (n >= 25)
        {
            n -= 25;
        }
        else if (n >= 10)
        {
            n -= 10;
        }
        else if (n >= 5)
        {
            n -= 5;
        }
        else
        {
            n -= 1;
        }
        res++;
    }

    // Sum the number of quarters, dimes, nickels, and pennies used
    // Print that sum
    printf("%d\n", res);
}
