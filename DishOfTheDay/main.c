#include <stdio.h>
#include <string.h>

char dayOfTheWeek[10] = "";
char mon[10] = "월요일";
char tue[10] = "화요일";
char wed[10] = "수요일";
char thu[10] = "목요일";
char fri[10] = "금요일";
char sat[10] = "토요일";
char sun[10] = "일요일";

int main() {
    printf("요일을 입력하세요.\n");
    scanf("%s", dayOfTheWeek);

    const int compare1 = strcmp(dayOfTheWeek, mon);
    const int compare2 = strcmp(dayOfTheWeek, tue);
    const int compare3 = strcmp(dayOfTheWeek, wed);
    const int compare4 = strcmp(dayOfTheWeek, thu);
    const int compare5 = strcmp(dayOfTheWeek, fri);
    const int compare6 = strcmp(dayOfTheWeek, sat);
    const int compare7 = strcmp(dayOfTheWeek, sun);

    switch(0){
        case compare1:
            printf("%s : 청국장", mon);
            break;
        case compare2:
            printf("%s : 비빔밥", tue);
            break;
        case compare3:
            printf("%s : 된장찌개", wed);
            break;
        case compare4:
            printf("%s : 칼국수", thu);
            break;
        case compare5:
            printf("%s : 냉면", fri);
            break;
        case compare6:
            printf("%s : 소불고기", sat);
            break;
        case compare7:
            printf("%s : 오삼불고기", sun);
            break;
    }
}
