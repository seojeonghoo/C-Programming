//2. 함수 - 소수 판별

#include <stdio.h>
#include <math.h>
#include <time.h>

int is_prime1(int n);
int is_prime2(int n);
int is_prime3(int n);

int main(){
    int n = 2147483647; // 메르센 소수 (2^n - 1) 중 하나로, 매우 큰 소수
    clock_t start, end;
    double result1, result2, result3;

    start = clock();
    printf("is_prime1: %d\n", is_prime1(n));
    end = clock();
    result1 = (end - start) / CLOCKS_PER_SEC;
    
    start = clock();
    printf("is_prime2: %d\n", is_prime2(n));
    end = clock();
    result2 = (end - start) / CLOCKS_PER_SEC;

    start = clock();
    printf("is_prime3: %d\n", is_prime3(n));
    end = clock();
    result3 = (end - start) / CLOCKS_PER_SEC;

    printf("Time taken by is_prime1: %f seconds\n", result1);
    printf("Time taken by is_prime2: %f seconds\n", result2);
    printf("Time taken by is_prime3: %f seconds\n", result3);


    return 0;
}

int is_prime1(int n){
    if(n <= 1) return 0;
    for(int i = 2; i < n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int is_prime2(int n){
    if(n <= 1) return 0;
    for(int i = 2; i <= n / 2; i++){ // 시간 복잡도: O(n) -> O(n/2) -> O(1)
        if(n % i == 0) return 0;
    }
    return 1;
}   

int is_prime3(int n){
    if(n <= 1) return 0;
    for(int i = 2; i <= sqrt(n); i++){ // 시간 복잡도: O(n) -> O(sqrt(n))
        if(n % i == 0) return 0;
    }
    return 1;
}
