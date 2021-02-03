// 학점 계산기 프로그램_array
// 3주차 과제 (1)-2
// if문 대신에 배열로 구현하면 값 수정하기 쉬움.

#include <stdio.h>

// 배열로 구현하면 점수 기준을 수정할 때 용이함.

const int LEVEL = 9; // 성적 구간 개수
const int SCORES[LEVEL] = {95, 90, 85, 80, 75, 70, 65, 60, 0}; // 성적 기준
const char *GRADES[LEVEL] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"}; // 성적 구간
int SCORE = 0;
const int CODE_EXIT = 999;
int score_to_grade(int n);

int main() {
    printf("학점 프로그램\n종료를 원하면 \"999\"를 입력\n");
    printf("[학점 테이블]\n 점수 : 95  90  85  80  75  70  65  60  0\n");
    printf(" 학점 : A+  A   B+  B   C+  C   D+  D   F\n");
    while(SCORE != CODE_EXIT){
        printf("점수 입력하세요. (0 ~ 100) : ");
        scanf("%d", &SCORE);
        score_to_grade(SCORE);}
}

int score_to_grade(int n){
    if (n == CODE_EXIT){
        printf("학점 프로그램을 종료합니다.\n");
        return 0;
    } else if((n > 100)||(n < 0)){
        printf("** %d 점수 올바르게 입력하세요. 범위는 0 ~ 100 입니다.\n", n );
        return 1;
    }
    else {
        for (int i = 0 ; i < LEVEL ; i++){
            if (SCORES[i] < SCORE){
                printf("성적은 %s 입니다.\n", GRADES[i]);
                break;
            }
        }
    }
}