#include <stdio.h>
int get_larger(int num1, int num2)
int get_smaller(int num1, int num2)
{
    int max, min;

    if(num1 >= num2)
        min = num2;
    else
        max = num1;

    return min;
}

int main()
{
    int num1, num2, num3, max, min;

    printf("three input number: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = get_larger(num1, num2);
    max = get_larger(max, num3);

    min = get_smaller(num1, num2);
    min = get_samller(min, num3);


    printf("larger number. \n");
    printf("%d", max);

    printf("smaller number. \n");
    printf("%d", min);
}
