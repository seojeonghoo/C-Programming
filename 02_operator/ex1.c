// 1. 연산자 (대입, 산술)

#include <stdio.h>

int main(void){
    // 대입 연산자
    int a , b = 10;
    a = b;
    printf("%d,%d\n", a, b); // 변수 a는 초기화되지 않았으므로 쓰레기 값이 출력되고, 변수 b는 10으로 초기화되어 10이 출력됨


    // 산술 연산자
    a= 5, b= 2;
    printf("%d + %d = %d\n", a, b, a+b); // 덧셈 연산자
    printf("%d - %d = %d\n", a, b, a-b); // 뺄셈 연산자
    printf("%d * %d = %d\n", a, b, a*b); // 곱셈 연산자
    printf("%d / %d = %d\n", a, b, a/b); // 나눗셈 연산자
    printf("%d %% %d = %d\n", a, b, a%b); // 나머지 연산자


    // 자동 형 변환
    double d = a;
    printf("%.1f\n", d);

    d= a + 3.5; // int + double = double -> 5.0 + 3.5 = 8.5
    printf("%.1f\n", d);

    // 강제 형 변환 (casting)
    printf("%.1f\n", (double)a / b);
    
    // 정수승격
    char c1 = 100, c2 = 100;
    printf("%d %d\n", sizeof(c1), sizeof(c2));
    printf("%d\n", c1 + c2); 

    char c= c1 + c2; // char 타입은 -128 ~ 127 범위를 가지므로, 200이 출력됨
    printf("%d\n", c); // char 타입은 -128 ~ 127 범위를 가지므로, 200이 출력됨



    // 정수 축소 변환
    a = 256;
    c = a; //char <- int (00000 11111111)

    printf("%d", c);


    d= 3.14;
    int i = d;
    printf ("%d ",i); // 03이 출력됨


    return 0;
}