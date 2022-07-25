#include <stdio.h> //Header file
int main() //Main function starts from here
{
    char SSPSTAT; //Variable declaration
    //Read the input from the user
    printf("Enter the HEXA value for SSPSTAT Register: ");
    scanf("%x",&SSPSTAT);
    // printing the input value in the binary form
    printf("Binary representation of Value of  SSPSTAT Register : ");
    for(int i = 7;i >= 0; i--)
    {
        printf("%d ", (SSPSTAT >> i) & 1);
    }
    SSPSTAT = SSPSTAT & 0XA7; //using this logic make cleared bits of the given bits 
    printf("\nBinary representation of Value of SSPSTAT Register after cleared the CKE , P, S: ");
    for(int i = 7;i >= 0; i--)
    {
        printf("%d ", (SSPSTAT >> i) & 1);
    }
    return 0;
} 
