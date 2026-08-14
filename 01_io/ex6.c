#include <stdio.h>

int main(void) {
    // int a,b,c;

    // printf("%p %p %p\n", &a, &b, &c); // 변수 a, b, c의 주소를 출력하여 메모리 상에서의 위치를 확인

    // // scanf("%d%d", &a ,&b); // 사용자로부터 두 개의 정수를 입력받아 변수 a와 b에 저장
    // // printf("%d, %d\n", a, b); // 입력받은 두 정수를 출력


    // // 10년 11월 11일 10시 20분 30초 // 사용자로부터 년, 월, 일, 시, 분, 초를 입력받아 변수 a, b, c에 저장
    // // scanf("%d년 %d월 %d일 %d시 %d분 %d초", &a, &b, &c, &a, &b, &c); // 입력받은 년, 월, 일, 시, 분, 초를 출력
    // // printf("%d년 %d월 %d일 %d시 %d분 %d초\n", a, b, c, a, b, c); // scanf의 반환값은 입력받은 항목의 개수이므로, 입력이 성공적으로 이루어지면 6이 출력됨


    // int r = scanf("%d", &a); // scanf의 반환값은 입력받은 항목의 개수
    // printf("%d\n", a); // 입력받은 정수 a를 출력
    // printf("%d\n", r); // 입력이 성공적으로 이루어지면 1, 실패하면 0, EOF이면 -1을 반환

    
    // int t = 'A'; // 'A'의 아스키 코드 값은 65
    // printf("%d\n", t); // 'A'의 아스키 코드 값인 65가 출력됨
    // printf("====================================\n");

    // float f;
    // double d;
    // scanf("%f", &f); // 사용자로부터 실수(float)를 입력받아 변수 f에 저장
    // scanf("%lf", &d); // 사용자로부터 실수(double)를 입력받아 변수 d에 저장
    // printf("%f,%lf\n", f, d); // 입력받은 실수 f와 d를 출력
    // printf("====================================\n");

    // //  %c 사용시 주의
    // char ch;
    // getchar(); // 버퍼에 남아있는 개행 문자를 제거하기 위해 getchar() 함수를 호출
    // scanf(" %c", &ch); // 사용자로부터 문자 하나를 입력받아 변수 ch에 저장
    // printf("%c\n", ch); // 입력받은 문자 ch를 출력


    float height;
    double weight;
    char blood_type;
    scanf("%f %lf %c", &height, &weight, &blood_type); 
    printf("키: %f, 몸무게: %lf, 혈액형: %c\n", height, weight, blood_type);
    
    return 0;
}
