// 조건문 - if문

#include <stdio.h>

int main(){
    int n = 3;

    if (n > 1 && n < 5){ printf("출럭완\n"); }

    if (n%2 == 0){ printf("짝수\n"); } else { printf("홀수\n"); }



    int a = 10, b = 20;
    //  a > b : a, a< b : , a==b: 같은 값

    if (a > b){
        printf("a\n");
    } else if (a < b){
        printf("b\n");
    } else {
        printf("a = b\n");
    }


    // 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 60점 이상이면 D, 60점 미만이면 F

    int score = 85;
    char grade;

    if (score >= 90){
        grade = 'A';
    } else if (score >= 80){
        grade = 'B';
    } else if (score >= 70){
        grade = 'C';
    } else if (score >= 60){
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("%d점 -> %c등급\n", score, grade);

    

    return 0;
}

