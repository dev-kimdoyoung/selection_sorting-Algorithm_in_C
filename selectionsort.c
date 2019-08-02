#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "boolean.h"
/*
 * function prototype
 */
// 선택 정렬 알고리즘
void selectionSort(int value[], int count);
// 배열에서 index가 x인 값과 y인 값의 위치를 서로 바꾸는 알고리즘
void swap(int value[], int x, int y);

int main() {
    int value[10] = {80, 30, 10, 20, 40, 100, 90, 60, 50, 70};
    int count = sizeof(value) / sizeof(int);
    
    selectionSort(value, count);

    return 0;
}

// 오름 차순으로 선택(selection) 정렬
void selectionSort(int value[], int count) {
    // 임시로 index를 저장할 변수
    int temp = 0;

    // 선택 정렬 알고리즘
    for(int i = 0; i < count - 1; i++) {
        temp = i;
        for(int j = i + 1; j < count; j++) {

            if(value[temp] > value[j]) {
                temp = j;
            }
        }
        swap(value, i, temp);

        // 1회 정렬된 이후의 배열 요소 출력
        for(int k = 0; k < count; k++)
            printf("%d   ", value[k]);
        printf("\n");
    }
}

// 배열에서 x와 y의 자리를 바꾼다.
void swap(int value[], int x, int y) {
    int temp;
    temp = value[y];
    value[y] = value[x];
    value[x] = temp;
}