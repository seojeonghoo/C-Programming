// 구조체 응용

#include <stdio.h>
#include <string.h>

typedef int INT;

typedef struct Student {
    int number;
    char name[10];
    double score;
} STUDENT;


int main() {
    STUDENT s = {1, "뽀로로", 100};
    STUDENT *p = &s;

    printf("[%d] %s %.1f\n", p->number, p->name, p->score);

    return 0;
}