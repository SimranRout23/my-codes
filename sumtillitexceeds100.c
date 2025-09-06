// sum of user defined numbers until sum exceeds 100

#include <stdio.h> 
int main()  
{ 
    int num, sum = 0; 
 
    // Do-while loop to keep entering numbers until the sum exceeds 100 
    do { 
        printf("Enter a number: "); 
        scanf("%d", &num); 
        sum+=num;  // Add the entered number to the sum 
        printf("Current sum: %d\n", sum); 
    } while (sum <= 100);  // Continue until the sum exceeds 100 
    printf("The final sum is: %d\n", sum); 
    return 0;
}