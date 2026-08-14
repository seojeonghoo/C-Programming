// 구조체 기초

#include <stdio.h>
#include <string.h>


// 구조체 정의
struct Student {
    int number;
    char name[10];
    double score;
};

struct score {
    int kor;
    int mat;
    int eng;
};

int main() {
    // 구조체 변수 선언
    struct Student s1;
    struct Student s2 = {2, "크롱", 100};

    // 멤버 참조 연산자 (.)
    s1.number = 1;
    strcpy(s1.name, "뽀로로");
    s1.score = 100;

    printf("%d, %s, %.1f\n", s1.number, s1.name, s1.score);
    printf("%d, %s, %.1f\n", s2.number, s2.name, s2.score);

    return 0;
}