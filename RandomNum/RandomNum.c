#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int max, min, num;
    printf("랜덤한 숫자를 맞춥니다.\n");
    printf("범위를 엔터를 기준으로 최대값, 최솟값을 입력해 주세요.\n");
    scanf("%d %d", &max, &min);

    // 랜덤 숫자 생성
    srand(time(NULL)); // 랜덤 시드 초기화
    int random_number = rand() % max + min;

    // 입력 버퍼 비우기
    while ((getchar()) != '\n'); // 입력 버퍼 비우기

    // 숫자 비교하기
    while(1){
    printf("원하는 숫자를 입력해 주세요! : ");
    scanf("%d", &num);
    if (num < random_number) {
        printf("UP!");
    } else if (num > random_number){
        printf("DOWN!");
    } else if (num == random_number){
        printf("축하합니다 정답입니다!");
        break;
    }}

    return 0;
}