// 학점 계산기 프로그램
// 3주차 과제 (1)

#include <stdio.h>

int SCORE = 0;
char *GRADE = "";
int scoreCheck(int n);
const int CODE_EXIT = 999;
int main() {
    printf("학점 프로그램\n종료를 원하면 \"999\"를 입력\n");
    printf("[학점 테이블]\n 점수 : 95  90  85  80  75  70  65  60  0\n");
    printf(" 학점 : A+  A   B+  B   C+  C   D+  D   F\n");
    printf("성적을 입력하세요.\n");
    while(SCORE != CODE_EXIT){
    scanf("%d", &SCORE);
    scoreCheck(SCORE);}
}

int scoreCheck(int n){
    if (n == CODE_EXIT){
        printf("학점 프로그램을 종료합니다.\n");
    } else if((n > 100)||(n < 0)){
            printf("** %d 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다.\n", n );
        }
    else {
        if((n >= 95)){
            GRADE = "A+";
        } else if ((n >= 90) && (n < 95)){
            GRADE = "A";
        } else if ((n >= 85) && (n < 90)){
            GRADE = "B+";
        } else if ((n >= 80) && (n < 85)){
            GRADE = "B";
        } else if ((n >= 75) && (n < 80)){
            GRADE = "C+";
        } else if ((n >= 70) && (n < 75)){
            GRADE = "C";
        } else if ((n >= 65) && (n < 70)){
            GRADE = "D+";
        } else if ((n >= 60) && (n < 65)){
            GRADE = "D";
        } else{
            GRADE = "F";
        }
        printf("%s\n",GRADE);

        }
        return 0;
}
