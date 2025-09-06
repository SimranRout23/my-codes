//Check whether an entered number is a prime or composite number.

 
#include <stdio.h> 
 
int main()  
{ 
    int num, i, isPrime = 1; 
 
    // Input the number from the user 
    printf("Enter a number: "); 
    scanf("%d", &num); 
 
    // Edge case: numbers less than 2 are not prime 
    if (num <= 1)  
   { 
        isPrime = 0; 
    } 
 
    // Check for divisibility from 2 to num/2 
    for (i = 2; i <= num / 2; i++)  
  { 
        if (num % i == 0)  
      { 
            isPrime = 0; // If divisible by any number, it's not prime 
            break; // Exit the loop early 
        } 
    } 
 
    // Output the result 
    if (isPrime == 1)  
   { 
        printf("%d is a prime number.\n", num); 
    }  
    else  
   { 
          printf("%d is a composite number.\n", num); 
    } 
 
    return 0; 
} 