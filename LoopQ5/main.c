/*Write a program to print out all Armstrong numbers between 1 and 500*/
/*01-05-2019*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,dn,d,temp;
    printf("The series of Armstrong numbers from 1 to 500 :  ");

    for(i=1; i<=500; i++){

        temp=0;
        n=i;

        do {
            d=n%10;
            temp=temp+(d*d*d);
            n=n/10;
        } while(n!=0);

        if(i==temp){
            printf("\t %d", i);
        }

    }
    return 0;
}
