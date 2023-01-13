#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare n as an interger
    int height;

    do
    {
        // prompt user to input value of n
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // this loop is for row
    for (int row = 0; row < height; row++)
    {
        //this loop is for space before the brick is print
        for (int space = 0; space < height - row - 1; space++)
        {
            //print space
            printf(" ");
        }

        // this loop is for colum
        for (int colum = 0; colum <= row; colum++)
        {
            // print brick
            printf("#");
        }
        // print new line
        printf("\n");
    }
}
