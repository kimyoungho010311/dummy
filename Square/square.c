#include <stdio.h>
int main(){

    int str_num, end_num;
    printf("\n==========================\n");
    printf("구구단을 출력합니다.\n");
    printf("숫자와 범위를 입력해주세요. : ");
    scanf("%d %d", &str_num, &end_num);
    printf("==========================\n");
    
    for(int i = 1 ; i <= end_num ; i++){
        printf("\n%d * %d = %d",str_num,i,i*str_num);
    }


    return 0;
}