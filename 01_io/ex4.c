#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>

int main (int argc, char const *const argv[]) {
    //기본 자료형 : 정수형, 실수형, 문자형
    // 1. 정수형: int(기본), short, long, long long

    //자료형 크기
    printf("%d,%d\n", sizeof(short), sizeof(unsigned short));
    printf("%d,%d\n", sizeof(int), sizeof(unsigned int));
    printf("%d,%d\n", sizeof(long), sizeof(unsigned long));
    printf("%d,%d\n", sizeof(long long), sizeof(unsigned long long));

    // 값의 범위
    printf("%d~%d\n", SHRT_MIN, SHRT_MAX);


    printf("%lld~%lld\n", LLONG_MIN, LLONG_MAX);
    printf("%llu\n", ULLONG_MAX);

    // 2. 실수형: float, double, long double
    float f;
    double d;
    long double ld;

    printf("%d,%d,%d\n", sizeof(f), sizeof(d), sizeof(ld));

    printf("%e, %e\n", -FLT_MAX, DBL_MAX);

    // 유효자리수
    printf("%d, %d, %d\n", FLT_DIG, DBL_DIG, LDBL_DIG);

    float f2 = 1.23456;
    printf("%.10f\n", f2);
    
    f2 = 123456789.0;
    printf("%.0f\n", f2);

    float sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += 0.1f;
    }
    printf("%.10f\n", sum);
    printf("%.10f\n", 0.1f);

    // 3. 문자형: char
    printf("%d\n", sizeof(char));
    printf("%d~%d\n", CHAR_MIN, CHAR_MAX);
    printf("%d~%d\n", 0, SCHAR_MAX);

    // 논리형은 없음
    printf("%d\n",10 < 20);

    // c99부터 _Bool이 추가되었지만, C17에서는 여전히 bool은 없음
    bool b = true;


    if(true) {
        printf("%d\n",b);
    }

    // 오버플로우
    char c = 127; // -128~127
    c = c - 1; // 127 - 1 = 126
    printf("%d\n", c); // 126

    c = -128;
    c = c - 1;
    printf("%d\n", c); // -128 - 1 = -129 -> 127

    return 0;
}
// 너는 나를 