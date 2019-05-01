/*Write a program to print all the ASCII values and their
equivalent characters using a while loop.*/
/*01-05-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ascii; int i = 0;

    while(i <= 255){
        printf("%d = ASCII value is %c \n", i,i);
        i++;
    }
    return 0;
}
