#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    printf("FIBONACCI SERIES:\n");
    do
    {
        printf("%d\t",a);
        c=a+b;
        b=a;
        a=c;
    } 
    while (a<=n);
    return 0; 
}