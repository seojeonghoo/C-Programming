// 3. 반복문 - do while문

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    int menu = 0;
    int ramen = 0, chicken = 0, pizza = 0;

    do {
        printf("메뉴를 선택하세요 (1. 라면\n 2. 치킨\n 3. 피자\n 9. 종료): ");
        scanf("%d", &menu);

        switch(menu) {
            case 1:
                ramen++;
                printf("라면을 주문하셨습니다.\n");
                break;
            case 2:
                chicken++;
                printf("치킨을 주문하셨습니다.\n");
                break;
            case 3:
                pizza++;
                printf("피자를 주문하셨습니다.\n");
                break;
            case 9:
                printf("주문을 종료합니다.\n");
                break;
            default:
                printf("잘못된 메뉴입니다.\n");
        }

    } while(menu != 9);

    printf("주문 내역:\n");
    printf("라면: %d개\n", ramen);
    printf("치킨: %d개\n", chicken);
    printf("피자: %d개\n", pizza);




    // 숫자 맞추기 게임 - 1~100 사이의 숫자 중 하나를 맞추는 게임 (업다운게임)

    int answer; // 정답 숫자
    
    srand((unsigned)time(NULL) ^ (unsigned)clock());
    for (int i = 0; i < 5; i++) {
        answer = rand() % 10 + 1; // 1~10 사이의 랜덤 숫자 생성
        printf("%d\n", answer);
    }


    answer = rand() % 100 + 1; // 1~100 사이의 랜덤 숫자 생성
    int guess; // 사용자가 입력한 숫자

    do {
        printf("1~100 사이의 숫자를 입력하세요: ");
        scanf("%d", &guess);

        if (guess < answer) {
            printf("업! \n");
        } else if (guess > answer) {
            printf("다운!\n");
        } else {
            printf("정답!\n");
        }
    } while(guess != answer);

    return 0;
}
