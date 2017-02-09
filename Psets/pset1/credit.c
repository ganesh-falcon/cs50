#include <cs50.h>
#include <stdio.h>

int main(void)
{

    printf("Number: ");
    long long card_no = get_long_long();
    // scanf("%lld", &card_no);
    
    int no_digits = 1;
    long long x = card_no;
    while(true)
    {
        if(x/10 == 0)
        {
            break;
        }
        else
        {
            x = x / 10;
            no_digits++;
        }
    }
    
    int card[no_digits];
    x = card_no;
    for(int i = 0;i < no_digits;i++)
    {
        card[i] = x % 10;
        x /= 10;
    }
    int answer = 0;
    for(int i = 1;i < no_digits;i = i + 2)
    {
        int temp = card[i] * 2;
        answer += temp % 10 + (temp / 10) % 10;
        // printf("-> %d", answer);
    }
    // printf("%d\n", answer);
    for(int i = 0;i < no_digits;i = i + 2)
        answer += card[i];
    // printf("%d, %d", no_digits, answer);
    if(answer % 10 == 0)
    {
        if(card[no_digits - 1] == 4)
        {
            printf("VISA\n");
            return 0;
        }
        else if(card[no_digits - 1] == 3 && card[no_digits - 2] == 4)
        {
            printf("AMEX\n");
            return 0;
        }
        else if(card[no_digits - 1] == 3 && card[no_digits - 2] == 7)
        {
            printf("AMEX\n");
            return 0;
        }
        else if(card[no_digits - 1] == 5 && card[no_digits - 2] == 1)
        {
            printf("MASTERCARD\n");
            return 0;
        }
        else if(card[no_digits - 1] == 5 && card[no_digits - 2] == 2)
        {
            printf("MASTERCARD\n");
            return 0;
        }
        else if(card[no_digits - 1] == 5 && card[no_digits - 2] == 3)
        {
            printf("MASTERCARD\n");
            return 0;
        }
        else if(card[no_digits - 1] == 5 && card[no_digits - 2] == 4)
        {
            printf("MASTERCARD\n");
            return 0;
        }
         else if(card[no_digits - 1] == 5 && card[no_digits - 2] == 5)
        {
            printf("MASTERCARD\n");
            return 0;
        }
    }
    printf("INVALID\n");
    return 0;
}