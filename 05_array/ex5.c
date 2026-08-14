// 5. 다차원 배열
#include <stdio.h>
#include <string.h>

int main(){
    // 2차원 배열 선언
    int arr[2][3];

    printf("%d\n", sizeof(arr)); //24
    printf("%d\n", sizeof(arr[0])); //12
    printf("%d\n", sizeof(arr[0][0])); //4

    int num[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }


    printf("%p\n", num); // 0x7ffee3b8a9c0
    printf("%p\n", num[0]); // 0x7ffee3b89c0
    printf("%p\n", &num[0][0]); // 0x7ffee3b89c0

    printf("%p\n", num[1]); // 0x7ffee3b89c0 + 12 = 0x7ffee3b89cc
    printf("%p\n", &num[1][0]); // 0x7ffee3b89cc




    //2명의 국,영,수 점수 입력 -> 총점, 평균 구하기
    int score[2][3];
    for (int i = 0; i < 2; i++){
        printf("%d번째 학생의 국,영,수 점수 입력: ", i + 1);
        for (int j = 0; j < 3; j++){
            scanf("%d", &score[i][j]);
        }
        printf("\n");
        int sum = 0;
        for (int j = 0; j < 3; j++){
            sum += score[i][j];
        }
        printf("%d번째 학생의 총점: %d, 평균: %.2f\n", i + 1, sum, sum / 3.0);
    }



    // 가변 길이 배열 (VLA)
    int n;
    scanf("%d", &n);
    int arr2[n][n]; // n이 3이므로 3x3




    memset(arr2, 0, sizeof(arr2)); // arr2의 모든 요소를 0으로 초기화

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }


    //3차원 배열 선언
    int arr3[2][3][4]; // 2개의 3x4 배열

    printf("%d\n", sizeof(arr3)); // 96
    printf("%d\n", sizeof(arr3[0])); // 48
    printf("%d\n", sizeof(arr3[0][0])); // 4
    printf("%d\n", sizeof(arr3[0][0][0])); // 4
    return 0;
}