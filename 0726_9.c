#include <stdio.h>
int f(int);
int main()
{
    int coin = 100;
    int numofcoffee;

    printf("함수는 자동판매기와 똑같습니다. \n");
    printf("동전을 넣어주세요 : ");
    scanf("%d", &coin);
    numofcoffee = f(coin);

    printf("%d잔의 커피가 나왔습니다. \n", numofcoffee);
    return 0;
}

int f(int x)
{
    int ret;
    printf("%d원을 넣으셨군요. \n", x);

    if(x == 100)
        ret = 1;
    else if(x == 200)
        ret = 2;
    else if(x == 300)
        ret = 3;
    else{
        printf("이 자판기는 300원까지밖에 처리 못해요\n");
    ret = 0;
    }
    return ret;
}