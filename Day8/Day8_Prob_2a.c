#include <stdio.h>
int main()
{
    //declare the variables
    int size, temp;
    //read the input from the user
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &size);
    //declare the array with the size 
    int array[size]; 
    //read array elements from the user
    printf("Input %d number of elements in the array : \n", size);
    for(int i = 0; i < size; i++)
    {
        printf("element-%d : ",i);
        scanf("%d",&array[i]);
    }
    //declare the pointer and store the base address of an array
    int *ptr = array;
    //using the pointer doing the sorted array
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
        
    }
    printf("The elements in the array after sorting: \n");
    for(int i = 0; i < size; i++)
    {
        printf("element-%d : ",i);
        printf("%d\n",*(ptr + i));
    }
  return 0;
}
