#include <stdio.h>
#include <math.h>

const int SIZE = 5;
int first_num = 0; // 첫번째 입력 값
int second_num = 0; // 두번째 입력 값

int first_nums[5] = {0, };
int second_nums[5] = {0, };

int nums_split(int a, int b[]); // 정수 a를 자릿수로 쪼개어 정수형 배열 b의 원소로 할당.
int nums_sort(int arr[]); // 버블 정렬
// int nums_print(int arr[]); sort 확인용 출력 함수
int check_match(char a[], char b[]); // 정수형 배열 a와 b의 원소가 같은지 확인.

int main() {
    scanf("%d%d", &first_num, &second_num);
    nums_split(first_num, first_nums);
    nums_split(second_num, second_nums);

    nums_sort(first_nums);
    nums_sort(second_nums);

    /*
    nums_print(first_nums);
    nums_print(second_nums);
    */

    check_match(first_nums, second_nums);

}

int nums_split(int a, int b[]){
    int k = pow(10.0, (double)SIZE - 1);
    char nums[5] = {0, };

    for(int i = 0; i < SIZE; i++){
        nums[i] = a / k;
        b[i] = nums[i];
        a  -= k * nums[i];
        k /= 10;
    }
}

int nums_sort(int arr[]) {
    int temp;
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

/*
int nums_print(int arr[]){
    for (int i = 0; i < SIZE; i++){
        printf("%d", arr[i]);
    }
    printf(" ");
}
*/

int check_match(char a[], char b[]){
    int i = 0;
    for (; i < SIZE; ) {
        if (a[i] == b[i]){
            i++;
        }
        else { printf("False"); return 1; }
    }
    if ( i == SIZE ){ printf("True"); }
}