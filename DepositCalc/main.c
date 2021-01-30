// 예금 만기 금액 게산기
// 2주차 과제 (2)

#include <stdio.h>

int principal = 0; // 원금
int interest = 0; // 이자

int main() {
    printf("목표 금액을 입력하세요.\n");
    scanf("%d", &principal);
    interest = principal * 0.12;
    printf("1년 만기시 받을 금액은. %d원 입니다.", principal + interest);
}
