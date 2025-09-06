//Find sum of all even numbers in a given range.  

#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    printf("Enter the range of the numbers:\n");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("The sum of all even digits between %d and %d is: %d",a,b,sum);
    return 0;
}