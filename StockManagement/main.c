// 재고 관리 프로그램
// 2주차 과제 (1)

#include <stdio.h>

int opt = 0; // 메뉴 선택 번호
int initStock = 0; // 입고량
int stock = 0; // 현재 재고량
int preStock = 0; // 이전 재고량
int price = 0; // 가격
int orderCount = 0; // 누적 주문 건수
int sales = 0; // 매출액

int set();
int order();

int main(){
    while(1){
    printf("\n1. 재고 정보 초기 입력\n2. 주문 및 재고 관리\n3. 종료\n");
        scanf("%d", &opt);
        switch(opt){
            case 1:
                set();
                break;
            case 2:
                order();
                break;
            case 3:
                return 0;
        }
    }
};

int set(){
    printf("\n상품의 입고량을 입력하세요.\n");
    scanf("%d", &stock);
    initStock = stock;
    printf("상품의 가격을 입력하세요.\n");
    scanf("%d", &price);
    printf("재고량 : %d\n가격 : %d \n", stock, price);
};

int order(int n){
    printf("\n주문 상품의 갯수를 입력하세요.\n");
    scanf("%d", &n);
    if(stock - n >= 0) {
        orderCount++;
        preStock = stock;
        stock -= n;
        sales =  (initStock - stock) * price * 1.1;
        printf("누적 주문건수 : %d\n기존재고량 : %d\n남은재고량 : %d\n매출액(부가세 10%% 포함) : %d\n", orderCount, preStock, stock, sales);

    }else{
        printf("재고가 부족합니다. 주문을 취소합니다. \n");
    }
}