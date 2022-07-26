#include <stdio.h>
void add1(int num1, int num2)
{  
    int sum;
    sum = num1 + num2;
   
   printf("%d + %d = %d\n\n", num1, num2, sum);
}

int main()
{
    int num1, num2, sum = 0;
    printf("two input number : \n");
    scanf("%d", &num1);
    printf("input number2 :\n");
    scanf("%d", &num2);
    add1(num1, num2);

    num1 = 10;
    num2 = 20;
    add1(num1, num2);

    num1 = 5;
    printf("input number2 : \n");
    scanf("%d", &num2);
    add1(num1, num2);

}