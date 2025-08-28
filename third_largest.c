#include <stdio.h>

int main()
{
    int arr[20];
    int n = 5; // you can make this 20 later if needed

    printf("\nEnter %d elements in the array:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int first = -2147483648;
    int second = -2147483648;
    int third = -2147483648;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] != second && arr[i] != first)
        {
            third = arr[i];
        }
    }

    printf("\nLargest element: %d", first);
    if (second != -2147483648)
        printf("\nSecond largest element: %d", second);
    else
        printf("\nSecond largest element not found (not enough unique values)");

    if (third != -2147483648)
        printf("\nThird largest element: %d\n", third);
    else
        printf("\nThird largest element not found (not enough unique values)\n");

    return 0;
}
