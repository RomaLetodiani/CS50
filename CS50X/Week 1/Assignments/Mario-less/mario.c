#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    // Print a pyramid of that height
    for (int i = height; i > 0; i--)
    {
        // Print row
        print_row(i - 1, height - i + 1);
    }
}

void print_row(int spaces, int bricks)
{
    // Print spaces
    for (int j = 0; j < spaces; j++)
    {
        printf(" ");
    }

    // Print bricks
    for (int k = 0; k < bricks; k++)
    {
        printf("#");
    }

    // Move to the next line
    printf("\n");
}
