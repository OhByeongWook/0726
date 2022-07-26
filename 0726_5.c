#include <stdio.h>

int main()
{
    char ch1;
    int i, j, ch_num;

    printf("Start input character");
    scanf("%c", &ch1);
    printf("\n");

    ch_num=(int)ch1-96;
    for(i=1; ch_num <= 24; i++)
    {
        for(j=1; j<=i; j++);
        {
            printf("%c", ch1);
            if(ch1!=122){
                ch1++;
                ch_num++;
            }
            else
                break;
        }
        printf("\n");
    }
}