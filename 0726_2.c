#include <stdio.h>

int main()
{
    int i, j;
    i = j = 0;

    printf("goto 문의 테스트입니다. \n");

    do
    {
        printf("do-while 문의 %d번째 반복입니다. \n", i);

        for(j = 0; j < 10; j++){
            if(j == 5)
                goto stop1;
            printf("for 문의 %d번째 반복입니다. \n", j);
        }
        i++;
    } while(i < 5);
stop1:
printf("프로그램을 종료합니다.");
}