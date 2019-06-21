#include <stdio.h>

int main()
{
    int prv=0,pre=1,trm,i,n;

    printf("Display first n Fibonacci numbers\n");

    printf("n : ");
    scanf("%d",&n);

    printf("Here are the first %d Fibonacci numbers: \n",n);
    printf("%d %d ", prv,pre);

    for(i=3; i<=n; i++)
    {
        trm=prv+pre;
        printf("%d ",trm);

        prv=pre;
        pre=trm;
    }

    printf("\n");

    return 0;
}
