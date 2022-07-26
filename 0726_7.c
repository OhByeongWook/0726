#include <stdio.h>

int get_larger(int num1, int num2)
{
    int max;

    if(num1 >= num2)
        max = num1;
    else
        max = num2;

    return max;
}

int main()
{
    int num1, num2, num3, max;

    printf("three input number: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = get_larger(num1, num2);
    max = get_larger(max, num3);

    printf("larger number. \n");
    printf("%d", max);
}
