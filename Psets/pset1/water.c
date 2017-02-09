#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Minutes: ");
    int x = get_int();
    printf("Bottles: %d\n", x*12);
}