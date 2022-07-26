#include <stdio.h>

int main()
{
    int end_num, i, sum = 0;
    char ch1;

    printf("1 to input_num of sum: A\n");
    printf("1 to input_num of odd num: B\n");

    printf("Choice A or B: \n");
    scanf("%c", &ch1);
    printf("input number:");
    scanf("%d", &end_num);

    switch (ch1)
    {
    case 'A':
    case 'a':
    for(i=1; i <= end_num; i++)
            sum = sum + i;
        printf("1 to %d of sum : %d\n", end_num, sum);
    case 'B':
    case 'b':
         for(i=1; i <= end_num; i = i+2);
            printf("%d\t",i);
        break;
    
    default:
        printf("End.");
    }







    if(ch1 == 'A' || ch1 == 'a'){
        for(i=1; i <= end_num; i++)
            sum = sum + i;
        printf("1 to %d of sum : %d\n", end_num, sum);
    }
    else{
        for(i=1; i <= end_num; i = i+2);
            printf("%d\t",i);
    }
}