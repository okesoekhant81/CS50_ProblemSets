#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start;
    int end;

    // TODO: Prompt for start size
    do
    {
        start = get_int("Start Population: ");
    }
    while (start < 9);
    // TODO: Prompt for end size
    do
    {
        end = get_int("End Population: ");
    }
    while (start > end);
    // TODO: Calculate number of years until we reach threshold
    int year = 0;
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        year++;
    };
    // TODO: Print number of years
    printf("Years: %i", year);
}
