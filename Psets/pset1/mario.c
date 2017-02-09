#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Height: ");
    int height;
    while(true)
    {
        int x = get_int();
        height = x;
        if(height < 24 && height >= 0)
        {
            break;
        }
        else
        {
            printf("Height: ");
        }
    }
    for(int i = 0;i < height;i++)
    {
        for(int j = 0;j < height - 1 - i;j++)
        {
            printf(" ");
        }
        for(int j = 0;j < i + 1;j++)
        {
            printf("#");
        }
        printf("  ");
        for(int j = 0;j < i + 1;j++)
        {
            printf("#");
        }
        for(int j = 0;j < height - 1 - i;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}