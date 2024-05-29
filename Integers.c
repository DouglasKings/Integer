#include <stdio.h>
#include <stdlib.h>

int main(){
    int Number1 = 0, Number2 = 0, Sum = 0;
    
    printf("Enter the first integer: \n");
    scanf("%d", &Number1);
    
    printf("Enter the second integer: \n");
    scanf("%d", &Number2);

    Sum = Number1 + Number2;

    printf("The fisrt integers is: %d \n", &Number1);
    printf("The second integers is: %d \n", &Number2);
    printf("The sum of two integers is: %d \n", Number1 + Number2);


    return 0;
}