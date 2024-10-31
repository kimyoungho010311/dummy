// 입출력 프로그램
#include <stdio.h>

int main()
{   
    char data[100];
    printf("아무 문자를 입력해 주세요 : ");
    scanf("%s", data);

    printf("입력한 문자열 : %s\n", data);
    return 0;
}