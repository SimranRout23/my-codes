//display of array elements
#include<stdio.h>
main()
{
    int arr[50];
    int size,index;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("enter values:");
    for(index=0;index<size;index++)
    {
        scanf("%d",&arr[index]);
    }
    printf("The array is :");
    for(index=0;index<size;index++)
    {
        printf("%d\t",arr[index]);
    }
}