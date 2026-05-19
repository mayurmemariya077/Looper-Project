

#include <stdio.h>

int main()
{
    int num, counter = 0;

    printf("Enter any number: ");


    scanf("%d", &num);

    while (num != 0)
    {

        num = num / 10;

        counter++;

    }

    printf("Total number of digits: %d", counter);

    return 0;
}