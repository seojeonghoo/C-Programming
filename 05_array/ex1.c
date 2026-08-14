//1. 1차원 배열

#include <stdio.h>
#define SIZE 5


int main(){
    //배열 선언
    char arr[SIZE];
    int arr2[SIZE];
    double arr3[SIZE];

    printf("%d\n", sizeof(arr)); //5
    printf("%d\n", sizeof(arr2)); //20
    printf("%d\n", sizeof(arr3)); //40


    //배열 초기화
    int num[SIZE] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < SIZE; i++){
        printf("%d ", num[i]);
    }

    //5명 플밍 점수를 입력 받아 평균 구하기
    int score[SIZE];
    int sum = 0;
    for (int i = 0; i < SIZE; i++){
        printf("점수 입력: ");
        scanf("%d", &score[i]);
        sum += score[i];
    }
    printf("평균: %d\n", sum / SIZE);
    return 0;
}