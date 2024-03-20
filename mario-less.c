#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)
{
   
    int height = get_positive_int("Height: ");


    for (int i = 0; i < height; i++)
    {

        for (int spaces = height - i; spaces > 1; spaces --)
        {
            printf(" ");
        }

        for (int hashes = 0; hashes <= i; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}


int get_positive_int(string prompt)
{
    int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n < 1 || n > 8);
    return n;
}
