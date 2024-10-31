#include <stdio.h>

int main() {
    int n; // n 변수를 선언
    printf("팩토리얼 계산기입니다.\n");
    printf("프로그램을 종료하고 싶으면 0을 입력하세요.\n");

    while (1) {
        printf("숫자를 입력해 주세요 : ");
        scanf("%d", &n);

        if (n == 0) {
            printf("프로그램을 종료합니다.\n");
            break; // n이 0이면 프로그램 종료
        } else if (n < 0) {
            printf("음수의 팩토리얼은 정의되지 않습니다.\n");
            continue; // 음수 입력 시 다시 입력 요청
        }

        int sum = 1; // 곱셈을 위해 sum을 1로 초기화
        for (int i = 1; i <= n; i++) {
            sum = sum * i; // sum에 i를 곱함
        }
        printf("계산된 결과는 %d 입니다.\n", sum);
    }

    return 0;
}
