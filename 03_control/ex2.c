// 2. 조건문 - switch~case문

#include <stdio.h>

int main(){
    
    // 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 60점 이상이면 D, 60점 미만이면 F
    int score = 85;
    char grade;

    switch (score/10){
        case 10:
        case 9:
            grade = 'A'; break;
        case 8:
            grade = 'B'; break;
        case 7:
            grade = 'C'; break;
        case 6:
            grade = 'D'; break;
        default:
            grade = 'F'; break;
    }

    printf("%d점 -> %c등급\n", score, grade);


    // 사칙연산
    char op;
    int op1, op2, result;
    printf("연산식 입력(2+3): ");
    scanf("%d %c %d", &op1, &op, &op2);

    switch (op) {
        case '+':
            result = op1 + op2;
            break;
        case '-':
            result = op1 - op2;
            break;
        case '*':
            result = op1 * op2;
            break;
        case '/':
            result = op1 / op2;
            break;
        default:
            printf("잘못된 연산자입니다.\n");
    }

    printf("결과: %d\n", result);
    return 0;
}