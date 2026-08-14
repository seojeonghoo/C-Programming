#include <stdio.h>

int main(int argc, char const *argv[]) {
    printf("1307\n서정후");
    
    
    printf("12345678901234567890\n");
    printf("a\tb\tc\nd\te\tf\n");
    printf("aa\tbb\tcc\ndd\tee\tff\n");

    printf("학번: \'1307\'\n");

    // 학번 \1307\ 출력하기 - \는 이스케이프 문자로 사용되므로, \를 출력하기 위해서는 \\로 작성해야 한다.
 
    printf("학번: \\1307\\\n");

    return 0;
}