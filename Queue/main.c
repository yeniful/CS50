// 큐 규현
// 3주차 과제 (3)

#include <stdio.h>
#include <string.h>

char queue[] = "";
const int qlen = 10;
int opt = 0;
int input = 0;
int front = 0;
int rear = 0;

int add();
int pop();
int display();
int quit();

int main(){
    printf("1. 삽입\n2. 삭제\n3. 조회\n4. 종료\n");
        while(opt != 4){
            scanf("%d", &opt);
            printf("입력 : %d\n", opt);
            switch (opt){
                case 1 :
                    add();
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    display();
                    break;
                case 4:
                    quit();
                    break;
            }
        }
}

int add(){ // queue가 꽉 찼는지 확인 후 꽉 차있으면 꽉 차있음 출력. 차있지 않으면 값을 받아 queue에 삽입.
    scanf("%d", &input);
    printf("삽입할 값 : %d", input);
    if (qlen == rear){
        printf("Queue가 꽉 찼습니다.");
    } else {
        queue[rear] = input;
        rear++;
    } printf("\n");
    return 0;
}

int pop(){ // queue가 비었는지 확인 후 비었으면 비었다고 출력. 비어있지 않으면 queue의 front 출력
    if (&queue[front] == &queue[rear]){
        printf("Queue가 비었습니다.");
    } else {
        printf("%d ", queue[front]);
        for (int i = 0; i < rear; i++){
            queue[i] = queue[i+1];
        }
        rear --;
    } printf("\n");
    return 0;
}

int display(){
    for (int i = 0; i < rear; i++){
        printf("%d ", queue[i]);
    } printf("\n");
    return 0;
}

int quit(){
    return 0;
}
