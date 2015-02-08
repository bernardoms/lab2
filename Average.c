#include<stdio.h>

int main()
{
    int values[1000];
    int number,temp = 0,i,j = 0;
    float average,averageAbove;
    printf("%s","Enter with a value: ");
    scanf("%d",&number);
    while(number > 0)
    {
        values[temp] = number;
        temp++;
        printf("%s","Enter with a value: ");
        scanf("%d",&number);
    }

    for(i = 0 ; i < temp ; i++)
    {
        average = average + values[i];
    }

    average = average/temp;


    for(i = 0 ; i < temp ; i++)
    {
        if(values[i] > average)
        {
            averageAbove = averageAbove + values[i];
            j++;
        }
    }

    averageAbove = averageAbove/j;
    printf("%s","average: ");
    printf("%f",averageAbove);


}
