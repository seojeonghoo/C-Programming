// 3. 연산자 (논리, 비교)

#include <stdio.h>

int main(){
    // 비교 연산자
    int a = 1, b= 2;
    printf("%d\n", a < b); // 1 (true)
    printf("%d\n", a > b); // 0 (false)
    printf("%d\n", a == b); // 0 (false)
    printf("%d\n", a != b); // 1 (true)
    printf("%d\n", a <= b); // 1 (true)
    printf("%d\n", a >= b); // 0 (false)
    
    // 점수가 60점 이상이면 Pass, 60점 미만이면 Fail (삼항 연산자 사용)
    int score = 90;

    printf("%s\n", score >= 60 ? "Pass" : "Fail");


    // 논리 연산자
    a = 0 , b = 1;
    printf("%d\n",!a);
    printf("%d\n", a && b);
    printf("%d\n", a || b);

    // 윤년계산 (365.2422일)
    // 4로 나누어 떨어지는 해는 윤년이지만, 100으로 나누어 떨어지는 해는 윤년이 아니다. 단, 400으로 나누어 떨어지는 해는 윤년이다.
    // 윤년: 2024, 2028, 2032, 2036, 2040, 2000 / 평년: 2100, 2200, 2300
    int year = 2024;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("%d는 윤년입니다.\n", year);
    } else {
        printf("%d는 윤년이 아닙니다.\n", year);
    }


    if ((year % 4 != 0 || year % 100 == 0) && year % 400 != 0){
        printf("%d는 평년입니다.\n", year);
    } else {
        printf("%d는 평년이 아닙니다.\n", year);
    }

    // short circuit 


    a= 0;
    
    if (a != 0 && 10 / a > 1){ // a가 0이므로, 10 / a는 실행되지 않음 (short circuit)
        printf("조건이 참입니다.\n");
    } else {
        printf("조건이 거짓입니다.\n");
    }



    a = 1, b = 2;
    if (a || b++ > 5){ // a가 1이므로, 10 / a는 실행되지 않음 (short circuit)
        printf("실행됨.\n");
    }
    printf("b: %d\n", b); // b는 2 (short circuit으로 인해 b++이 실행되지 않음)
    return 0;
}