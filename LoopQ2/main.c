/*Write a program to calculate factorial value of a number*/
/*01-05-2019*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, i, fact = 1;

    printf("Enter number for calculating factorial of it: ");
    scanf("%d", &num);

    //factorial of 5 is 120 = 1*2*3*4*5

    for(i=1 ; i<=num ; i++){

        fact = fact * i;
    }

    printf("%d", fact);

    return 0;
}
