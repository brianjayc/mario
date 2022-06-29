#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0; // declare height variable

    do
    {
        height = get_int("Height: "); //get height from user
    }
    while (height < 1 || height > 8); // check if valid

    for (int i = 0; i < height; i++) // loop below command # of times based on height
    {
        for (int j = height; j > 0; j--) // print left stack based on height
        {
            if (j > i + 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("  "); // print middle space
        for (int j = 0; j < height; j++) // print right stack based on height
        {
            if (j < i + 1)
            {
                printf("#");
            }
        }
        printf("\n"); // move to next row
    }
}
