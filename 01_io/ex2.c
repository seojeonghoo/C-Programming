// 2. 형식 지정자를 이용한 출력
#include <stdio.h>

int main(int argc, char const *argv[]) {
    printf("%d\n",10); //부호없는 10진 정수
    printf("%d\n",-10); //부호있는 10진 정수
    printf("%d + %d = %d\n",10,20,30);

    printf("%u\n",10); // 부호 없는 10진 정수
    printf("%u\n",-10); // 부호 없는 10진 정수로 -10이 표현안됨

    //-------------------------------------------------------------
    // 8진수
    printf("%o\n",10); // 8진수
    // 16진수
    printf("%x\n",10); //소문자 X라서 16진수로 표현된 숫자도 소문자로 출력됨
    printf("%X\n",10); //대문자 X라서 16진수로 표현된 숫자도 대문자로 출력됨


    printf ("%f\n",3.14); // 실수
    printf ("%c\n",'A'); // 문자
    printf ("%s\n","가나다"); // 문자열

    printf("%p\n",main); // 포인터 주소값 출력, main은 함수의 이름이므로 main함수의 주소값이 출력됨
    printf("%%\n"); // % 기호 자체를 출력
    printf("%c\n",65); // 'A' 문자 출력
    printf("%d\n",'A'); // 'A' 문자의 아스키 코드값인 65 출력
    printf("%d\n",'a'); // 'a' 문자의 아스키 코드값인 97 출력
    printf("%d\n",'0'); // '0' 문자의 아스키 코드값인 48 출력

    printf("%d\n",'A'+ 1);
    printf("%c\n",'A'+ 1);
    printf("%d\n",'Z'-'A'+ 1);
    printf("%d\n",'a'- 'A');
    printf("%d\n",'a'- 32);
    printf("%d\n",'5'- '0');



    return 0;

}