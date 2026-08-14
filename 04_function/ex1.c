//함수 기본 
#include <stdio.h>
#include "myhader.h"

int main(){

    //사칙연산 필수
    printf("%d\n", add(5,2));
    printf("%d\n", sub(5,2));
    printf("%d\n", mul(5,2));
    printf("%.1f\n", div(5,2)); //2.5


    //입력 문자가 알파벳인지, 숫자인지 판별
    char c;
    scanf("%c", &c);

    //is_alpha() : 알파벳인지 판별
    //is_number() : 숫자인지 판별
    //그 외 기타문자
    if(is_alpha(c)){
        printf("알파벳\n");
    } else if(is_number(c)){
        printf("숫자\n");
    } else {
        printf("기타 문자\n");
    }

    return 0;
}