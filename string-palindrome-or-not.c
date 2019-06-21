#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20];
    int i, length,palindrome = 0;

    printf("Enter a string : ");
    scanf("%s", string1);

    length = strlen(string1);

    for(i=0; i < length ; i++)
    {
        if(string1[i] != string1[length-i-1])
        {
            palindrome = 1;
            break;
        }
    }

    if (palindrome)
    {
        printf("\n\"%s\"is not a palindrome.\n", string1);
    }
    else
    {
        printf("\n\"%s\" is a palindrome.\n", string1);
    }

    return 0;
}
