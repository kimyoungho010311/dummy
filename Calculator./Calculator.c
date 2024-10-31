// 계산기 프로그램
#include <stdio.h>

int plus(int num1, int num2)
{   return num1 +  num2;}
int minus(int num1, int num2)
{   return  num1 -  num2;}
int square(int num1, int num2)
{   return  num1 *  num2;}
float div(int num1, int num2)
{   return  num1 /  num2;}


int main()
{
    int num1, num2;
    char operator;
    
    printf("이 프로그램은 계산기 프로그램입니다. \n");
    printf("숫자를 띄어쓰기를 기준으로 두 개 입력해주세요 : ");
    scanf("%d %d", &num1, &num2);


    // 입력 버퍼 비우기
    while ((getchar()) != '\n'); // 입력 버퍼 비우기

    printf("연산자를 입력해 주세요 (+ , - , * , / 만 가능) : ");
    scanf("%c", &operator);
    if (operator == '+'){
        printf("결과는 : %d",plus(num1, num2));
    } else if (operator == '-'){
        printf("결과는 : %d",minus(num1, num2));
    } else if (operator == '*'){
        printf("결과는 : %d",square(num1, num2));
    } else if (operator == '/'){
        printf("결과는 : %.2f",div(num1,num2));
    }
    printf("프로그램을 종료합니다.\n");
    return 0;

}