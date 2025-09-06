//linear search 
#include<stdio.h>
main()
{
    int arr[50];
    int size,index,item,search;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter the values:");
    for(index=0;index<size;index++)
    {
        scanf("%d",&arr[index]);
    }
    printf("enter the value to be searched:");
    scanf("%d",&item);
    for(index=0;index<size;index++)
    {
        if(arr[index]==item)
        {
            search=1;
            break;
        }
    }
    if(search==0)
    {
        printf("The element is not present\n");
    }
    else{
        printf("Element is present\n");
    }
}
