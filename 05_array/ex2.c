//2. 문자 배열

#include <stdio.h>
#include <string.h>


int main(){
    //문자 배열 선언
    char name[6] = {'A', 'p', 'p', 'l', 'e', '\0'}; //문자열의 끝을 알리는 널 문자
    
    printf("%s\n", name); //문자열 출력

    //문자열 입출력 함수
    char str[20];
    scanf("%s", str); //공백이 없는 문자열 입력
    printf("%s\n", str);


    // gets(str); //공백이 있는 문자열 입력
    while(getchar() != '\n'); //버퍼 비우기

    // printf("입력한 문자열: %s\n", str);

    fgets(str, sizeof(str), stdin); //공백이 있는 문자열 입력
    printf("%s\n", str);

    // str[strlen(str) - 1] = '\0'; //개행 문자 제거
    str[strcspn(str, "\n")] = '\0'; //개행 문자 제거


    printf("[%s]\n", str);

    puts(str); //문자열 출력
    printf("-------------------------\n");

    








    return 0;
}