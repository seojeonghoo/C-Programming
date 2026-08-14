// 2. 연산자 (복합대입, 증감)

#include <stdio.h>

int main(){
    // 복합 대입 연산자
    int a = 10;
    a += 3; // a = a + 3;
    printf("%d\n", a); // 13이 출력

    a -= 3; // a = a - 3;
    printf("%d\n", a); // 10이 출력

    a *= 3; // a = a * 3;
    printf("%d\n", a); // 30이 출력

    a /= 3; // a = a / 3;
    printf("%d\n", a); // 10이 출력

    a %= 3; // a = a % 3;
    printf("%d\n", a); // 1이 출력


    // 증감 연산자
    a++; // a = a + 1;
    printf("%d\n",a); // 2
    --a; // a = a - 1;
    printf("%d\n",a); // 1


    // 수식내에서 사용시 주의하기
    int b = ++a;
    printf("%d,%d\n", a, b); // 2, 2


    b = a++;
    printf("%d,%d\n", a, b); // 3, 2
    
    return 0;
}