// 5. 반복문 - for 문
#include <stdio.h>

int main() {

    // //구구단 출력하기
    // // 2*1=2 ... 2*9=18
    // // ...
    // // 9*1=9 ... 9*9=81

    // for (int i = 2; i <= 9; i++) {
    //     for (int j = 1; j <= 9; j++) {
    //         printf("%d*%d=%d ", i, j, i*j);
    //     }
    //     printf("\n");
    // }



    // 각 자릿수의 합 출력
    // 12345 => 15출력
    
    // int num, sum = 0;
    // scanf("%d", &num);
    // for (int i = num; i > 0; i /= 10) {
    //     sum += i % 10;
    // } printf("%d\n",sum);


    //별표 삼각형 출력1
    // *
    // **
    // ***
    // ****
    // *****
    int n=5;
    for (int i = 1; i<=n; i++){
        for (int j = 1 ; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    //별표 삼각형 거꾸로 출력
    // *****
    // ****
    // ***
    // **
    // *
    for (int i = n; i >= 1; i--){
        for (int j = 1 ; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }


    // 별표 삼각형 3
    //     *
    //    **
    //   ***
    //  ****
    // *****
    for (int i = 1; i <= n; i++){
        for (int j = 1 ; j <= n-i; j++){
            printf(" ");
        }
        for (int k = 1; k <= i; k++){
            printf("*");
        }
        printf("\n");
    }

    // 정삼각형
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    for (int i = 1; i <= n; i++){
        for (int j = 1 ; j <= n-i; j++){
            printf(" ");
        }
        for (int k = 1; k <= 2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}