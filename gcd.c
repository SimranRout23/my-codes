//gcd of two numbers using for loop
#include<stdio.h>
int main()
    {
        int a,b,i,gcd;
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        for(i=1;i<=a && i<=b;i++)
        {
            if(a%i==0 && b%i==0)
            {
                gcd=i;
            }
        }
        printf("The GCD of %d and %d is: %d\n",a,b,gcd);
        return 0;
    }