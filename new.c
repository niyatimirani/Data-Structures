// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    
    int n ; // no of elements to be stored
    int *arr;
    
    int new_size;
   
    printf("Enter the no of elements to be stored ");
    scanf("%d" , &n); // 5 * 4 = 20
    
     arr = (int *) malloc(n * sizeof(int));
    //  arr = (int *) calloc(n , sizeof(int));
   if(arr == NULL)
   {
       printf("memory is not allocated\n");
   }
  printf("memory is allocated\n");
  for(int i = 0 ; i<n ; i++)
  {
      scanf("%d" , &arr[i]);
  }
   
    for(int i = 0 ; i<n ; i++)
   {
       printf("%d\t" , arr[i]);
   }
    printf("The size of array before %d\n" , sizeof(arr));
    printf("Enter the no of elements you want to store more  ");
    scanf("%d" , &new_size); 
    
    arr = (int *)realloc(arr , new_size * sizeof(int));
     printf("The size of array after %d\n" , sizeof(arr));
   free(arr);
   

    return 0;
}