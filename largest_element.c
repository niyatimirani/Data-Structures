//Write a program to find the largest element in an array 

#include <stdio.h>

int main()
{
    int arr[20];
    printf("\nEnter the 20 elements in an array ");
    for(int i =0 ; i<20 ; i++)
    {
        scanf("%d" , &arr[i]);
    }

    int max = arr[0];

    for(int i=1 ; i<20 ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The max element in an array is %d\n" , max);
    return 0;
}