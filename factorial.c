//Find the factorial of any user entered number using for loop

#include<stdio.h>
int main()
{
    int num,i;
    long long factorial=1;
    printf("Enter a number\n");
    scanf("%d",&num);
     if (num < 0) { 
        printf("Factorial is not defined for negative numbers.\n"); 
    } else { 
        // Use a for loop to calculate the factorial 
        for(i = 1; i <= num; i++) { 
            factorial *= i;  // Multiply the current factorial value by i 
        } 
 
        // Print the factorial 
        printf("Factorial of %d is: %lld\n", num, factorial); 
    } 
 
    return 0;
}