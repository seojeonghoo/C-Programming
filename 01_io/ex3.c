// 3. 필드 옵션을 이용한 출력

#include <stdio.h>

int main (int argc, char const *const argv[]) {
    printf("1234567890\n");
    printf("%10d\n",123); // 10칸의 필드 폭을 지정하여 오른쪽 정렬로 출력
    printf("%-10d\n",123); // 10칸의 필드 폭을 지정하여 왼쪽 정렬로 출력

    printf("%.2f\n", 3.14);
    printf("%10.2f\n", 3.14);

    printf("%.3f\n", 3.141592);

    printf("%10s\n","apple");
    printf("%-10s\n","apple");
    printf("%10s\n","가나다"); // 한글은 3바이트이므로 10칸의 필드 폭을 지정하여 오른쪽 정렬로 출력
    
    // Kor Math Eng Tot Avg
    // 100  90  80 270 90

    printf("%-10s %10s %10s %10s %10s\n", "Kor", "Math", "Eng", "Tot", "Avg");
    printf("%-10d %10d %10d %10d %10.2f\n", 100, 90, 80, 270, 90.00);

    
    printf("%-05d\n", 123); // 15칸의 필드 폭을 지정하여 오른쪽 정렬로 출력하고, 빈 칸을 0으로 채움
    return 0;
}