// 5. 변수

#include <stdio.h>

int global_var; //전역변수
void my_func(void);


int main (void) {
    // 변수 선언: 자료형 변수명
    int num;
    printf("%d\n", num); //쓰레기 값

    // 변수 초기화
    num = 10;

    int n1, n2 = 10;
    printf("%d, %d\n", n1, n2); //n1은 쓰레기 값

    // 변수의 종류 : 지역 변수, 전역 변수
    int x = 10; //지역 변수
    {
        int y = 20; //지역 변수
        printf("%d, %d\n", x,y); //10, 20
    }
    
    // printf("%d\n", y); //에러: y는 지역 변수이므로 블록 밖에서는 사용할 수 없음 
    
    printf("%d\n", global_var); //0
    my_func();
    printf("%d\n", global_var); //10
    
    
    // 변수의 범위 (scope)
    int i = 3; {
        int i = 5; //지역 변수 i는 블록 안에서만 유효
        printf("%d\n", i); //5
    }

    // 식별자 규칙: 알파벳 대소문자, 숫자, 언더스코어(_)로 구성
    int score, score2;  


    // 상수
    int max_len = 10;
    const int MAX_LEN = 10; //상수는 대문자로 작성하는 것이 관례
    // MAX_LEN= 20; //변경 불가능

    return 0;

}


void my_func(void) {
    printf("%d\n", global_var); //0
    global_var = 10;
    printf("%d\n", global_var); //10

    return;
}
