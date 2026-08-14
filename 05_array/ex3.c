//3. 문자열 함수

#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "apple banana"; //문자열 상수로 초기화
    char str2[20] = {0};

    // 문자열 길이
    printf("%d\n",strlen(str1)); //11 (널 문자 제외)
    printf("%d\n",sizeof(str1)); //12 (널 문자 포함)

    // 문자열 복사
    // strncpy(str2, str1, 5);  // 버퍼 오버플로우 위험 OK 
    strncpy(str2, str1, sizeof(str2) - 1);  // 버퍼 오버플로우 위험 OK 
    puts(str2); //apple


    // 문자열 비교
    char str3[10] = "apple";
    char str4[10] = "abple";

    printf("%d\n",strcmp(str3, str4)); //0 (같음)


    // 문자열 연결
    // strcat(str3, str4); //버퍼오버플로우 위험 OK
    strncat(str3, str4, sizeof(str3) - strlen(str3) - 1); 
    puts(str3);


    // 문자열 교환
    // int a = 10 , b = 20;
    // int temp = a;
    // a = b;
    // b = temp;

    char a[10] = "apple";
    char b[10] = "banana";

    puts(a); //apple
    puts(b); //banana

    // a와 b의 문자열을 교환
    char temp[10];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
    
    puts(a); //banana
    puts(b); //apple


    return 0;
}