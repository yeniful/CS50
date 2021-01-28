#include <stdio.h>
#define SIZE 500000

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    int partArr[SIZE];
    int lengthOfPartArr = n-1;

    for(int i = 0; i < lengthOfPartArr; i++){
        scanf("%d", &partArr[i]);
        if (partArr[i] != i)
            printf("K = %d", i);
    }
    return 0;
}
