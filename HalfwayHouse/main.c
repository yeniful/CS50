#include <stdio.h>
#include <math.h>

int nums = 0;
int arr[] = {0, };
int nums_split(int a, int b[]);

int main() {
    scanf("%d", &nums);
    nums_split(nums, arr);
    printf("%s", arr);
}

int nums_split(int a, int b[]){
    int i = 0;
    int j = 0;
    while (a > 0){
        int temp = a;
        while(a > 0){
            if (temp > 10){
                temp /= 10;
                j++;
            } else {
                a = a - ((double) temp * pow(10.0, (double)j));
            }
        }
        b[i] = temp;
        i++;
    }
    return 0;
}