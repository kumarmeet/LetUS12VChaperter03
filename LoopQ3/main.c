/*Write a program to find the value of one number raised to the power of another*/
/*01-05-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, i, pow=1;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for(i=1 ; i <= num2 ; i++){

        pow = pow * num1;
    }

    printf("%d is raised to the power of %d is %d",num1, num2, pow);

    return 0;
}
