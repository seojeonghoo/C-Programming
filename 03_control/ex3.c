// 3. 반복문 - while문

#include <stdio.h>

int main(){
    // 1~n까지의 합을 구하는 프로그램
    int n=10, sum = 0, i = 1;

    while(i <= n){
        sum += i;
        i++;
    }
    printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);



    //abcDE : 소문자 3개 대문자 2개 숫자 0개

    char c;
    scanf("%c", &c);

    int upper = 0, lower = 0, num = 0;

    while(c != '\n'){
        if(c >= 'a' && c <= 'z') lower++;
        else if(c >= 'A' && c <= 'Z') upper++;
        else if(c >= '0' && c <= '9') num++;

        scanf("%c", &c);
    }

    printf("소: %d개, 대: %d개, num: %d개\n", lower, upper, num);


    // 메뉴 선택
    int menu = 0;
    printf("메뉴를 선택하세요 (1. 라면\n 2. 치킨\n 3. 피자\n 9. 종료): ");
    scanf("%d", &menu);

    int ramen = 0, chicken = 0, pizza = 0;

    while(menu != 9){
        switch(menu){
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
        printf("메뉴를 선택하세요 (1. 라면\n 2. 치킨\n 3. 피자\n 9. 종료): ");
        scanf("%d", &menu);
    }

    printf("주문 내역:\n");
    printf("라면: %d개\n", ramen);
    printf("치킨: %d개\n", chicken);
    printf("피자: %d개\n", pizza);


    

    
    return 0;
}