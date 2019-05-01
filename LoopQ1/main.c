/*Write a program to calculate overtime pay of 10 employees*/
/*01-05-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int overtime, overtimePay, employees = 10, i = 1, hours;

    while(i <= employees){

        printf("Enter %d employee hours: ", i);
        scanf("%d",&hours);

        if(hours > 40){

        overtime = hours - 40;
        overtimePay = overtimePay + (12 * overtime);

        }else{

            printf("Enter hour above 40 only ");
            break;
        }

        i++;
    }

    printf("\nTotal overtime pay of %d employees is %d", i, overtimePay);

    return 0;
}
