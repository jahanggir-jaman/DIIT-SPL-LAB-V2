#include <stdio.h>

int main()
{
    int n, reverse = 0;

    printf("Enter a number to reverse : ");
    scanf("%d", &n);

    while (n != 0)
    {
        reverse *= 10;
        reverse += n%10;
        n /= 10;
    }

    printf("Reverse of the entered number is = %d\n", reverse);

    return 0;
}
