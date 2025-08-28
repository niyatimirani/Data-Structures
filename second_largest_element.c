#include <stdio.h>

int main()
{
    int arr[20];

    printf("\nEnter 20 elements in the array:\n");
    for(int i = 0; i < 20; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int sec_max = -2147483648; // Minimum possible int

    for(int i = 1; i < 20; i++)
    {
        if(arr[i] > max)
        {
            sec_max = max;
            max = arr[i];
        }
        else if(arr[i] > sec_max && arr[i] != max)
        {
            sec_max = arr[i];
        }
    }

    if (sec_max == -2147483648)
        printf("There is no distinct second largest element.\n");
    else {
        printf("The max element in the array is %d\n", max);
        printf("The second max element in the array is %d\n", sec_max);
    }

    return 0;
}
