// 포인터 기초

#include <stdio.h>

void swap(int *pa, int *pb);

int main() {
    char c = 'A';
    int i = 10;
    double d = 3.14;

    printf("%p, %d\n", &c, sizeof(&c));
    printf("%p, %d\n", &i, sizeof(&i));
    printf("%p, %d\n", &d, sizeof(&d));


    // 포인터 변수 
    char *pc = &c;
    int *pi = &i;
    double *pd = &d;

    // 간접참조 연산자 (*)
    printf("%c, %c\n", c, *pc);
    printf("%d, %d\n", i, *pi);
    printf("%f, %f\n", d, *pd);

    // &i++; -> pi++;
    // *pi++; -> (*pi)++;

    int a= 2 , b = 3;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    // 포인터 연산
    printf("%p, %p\n", &i, pi);
    printf("%p, %p\n", &i + 1, pi + 1);
    printf("%p, %p\n", &i + 2, pi + 2);

    // 포인터를 리턴하는 함수
    int *p = &i;
    printf("%d\n", *p);



    int arr[3] = {1,2,3};

    printf("%d\n", arr[0]);
    printf("%d\n", *(arr + 0));
    printf("%d\n", arr[1]);
    printf("%d\n", *(arr + 1));
    printf("%d\n", arr[2]);
    printf("%d\n", *(arr + 2));


    return 0;
}

void swap(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    return;
}

int *func() {
    static int a = 10;
    return &a;
}