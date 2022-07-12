#include <stdio.h>
int main() {
    int size,number,rem,temp,count= 0;
    printf("Enter the number of lottery tickets\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the ticket numbers: \n");
    for(int i = 0; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        temp = arr[i];
        while(temp)
        {
            rem = temp % 10;
            if(rem == 3)
            {
                ++count;
                break;
            }
            else
            {
                temp = temp / 10;
            }
        }
    }
    printf("the count is %d\n", count);
    
    return 0;
}