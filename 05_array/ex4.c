// 4. 1차원 배열 - 응용

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>

int fibo(int n);
int fibo2(int n);

int memo[100] = {0};
int prime[1000];

int main(){
    int n = 100;
    clock_t start, end;
    double result1, result2;
    //피보나치 수열
    // f(0) = 0, f(1) = 1, f(n) = f(n-1) + f(n-2)
    start = clock();
    printf("%d\n", fibo(n));
    end = clock();

    result1 = (double)(end - start) / CLOCKS_PER_SEC;
    printf("fibo: %lf seconds\n", result1);

    start = clock();
    printf("%d\n", fibo2(n));
    end = clock();
    result2 = (double)(end - start) / CLOCKS_PER_SEC;
    printf("fibo2: %lf seconds\n", result2);

    // 에라토스테네스의 체로 소수 구하기
    for (int i = 2; i < 1000; i++) prime[i] = 1;
    
    for (int i = 2; i <= sqrt(n); i++){
        if (prime[i]){
            for (int j = i * i; j <= n; j += i){
                prime[j] = 0;
            }
        }
    }
    
    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++){
        if (prime[i]) printf("%d ", i);
    }
    printf("\n");

    return 0;
}



// 재귀함수로 피보나치 수열 만들기 
int fibo(int n){
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}


int fibo2(int n){
    if (n<=1) return n;
    if (memo[n] != 0) return memo[n]; //이미 계산된 값이 있으면 return
    memo[n] = fibo2(n-1) + fibo2(n-2);
    return memo[n];
}