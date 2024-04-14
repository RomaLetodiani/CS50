#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

void print_bricks(int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0);

    // Print a pyramid of that height
    for (int i = 1; i <= height; i++)
    {
        // Print row
        print_row(height - i, i);
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
    print_bricks(bricks);

    // Print inside spaces
    printf("  ");

    // Print bricks
    print_bricks(bricks);

    // Move to the next line
    printf("\n");
}

void print_bricks(int bricks)
{
    for (int k = 0; k < bricks; k++)
    {
        printf("#");
    }
}
