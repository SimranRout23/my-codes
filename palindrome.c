//Check whether an entered number is a palindrome number or not

#include<stdio.h>
int main()
{
   int n,originalnum,remainder,reverse=0;
   printf("Enter a number :\n");
   scanf("%d",&n);
   originalnum=n;
   while(n!=0)
   {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
   }
   if(originalnum==reverse)
   {
    printf("%d is palindrome\n",originalnum);
   }
   else 
   {
    printf("%d is not in palindrome",originalnum);
   }
   return 0;
}