#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, max=-32768, min=32767, range;
    char choice='y';

    while(choice=='y'){
        printf("\nenter any number ");
        scanf("%d",&num);

        if(num>max){
            max=num;
        }


        if(num<min){
            min=num;
        }

        printf("\nYou Want To Add Another Number(y/n) ");
        fflush(stdin);
        scanf("%c",&choice);
    }

    range=max-min;

    printf("Largest number Is %d\n",max);
    printf("Smallest number Is %d\n",min);
    printf("Range Is %d\n",range);

    return 0;
}
