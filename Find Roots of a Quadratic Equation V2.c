#include <stdio.h>
#include <math.h>

void main()
{
    int a,b,c,d;
    float x1,x2;

    printf("Enter coefficients a, b and c\n");

    printf("a: ");
    scanf("%d",&a);

    printf("b: ");
    scanf("%d",&b);

    printf("c: ");
    scanf("%d",&c);

    d=b*b-4*a*c;
    
    if(d==0)
    {
        printf("Both roots are equal.\n");
        
        x1=-b/(2.0*a);
        x2=x1;
        
        printf("Root 1= %f\n",x1);
        printf("Root 2= %f\n",x2);
    }
    
    else if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        
        printf("Root 1= %f\n",x1);
        printf("Root 2= %f\n",x2);
    }
    else
        printf("Root are imaginary;\nNo Solution. \n");
}

