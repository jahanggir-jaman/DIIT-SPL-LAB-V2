#include <stdio.h>

int main()
{
    int arr1[100], i,n, sum = 0 , *p;

    printf("Input the number of elements to store in the array (max 100): ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Input the value for element %d : ",i+1);
        scanf("%d",&arr1[i]);
    }

    p = arr1;

    for (i = 0; i < n; i++)
    {
        sum += *p;
        p++;
    }

    printf("The sum of the elements of the array is : %d\n", sum);

    return 0;
}

