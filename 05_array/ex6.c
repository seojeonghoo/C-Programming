// 6. 2차원 문자 배열

#include <stdio.h>
#include <string.h>

void bubble_sort(int arr[], int size);
void print_sort(int arr[], int size);
void bubble_sort2(char arr[][20], int size);
void print_sort2(char arr[][20], int size);

int main(){
    char fruits[3][7] = {"Apple", "Banana", "Kiwi"};

    for (int i = 0; i < 3; i++){
        puts(fruits[i]);
    }

    // //오늘의 급식 메뉴 (밥 국 반찬 디저트)
    // char menu[4][100];

    // printf("<오늘의 메뉴 입력> : ");
    // for (int i = 0; i < 4; i++){
    //     fgets(menu[i], sizeof(menu[i]), stdin);
    //     menu[i][strcspn(menu[i], "\n")] = '\0';
    // }

    // puts("\n<오늘의 메뉴 출력> : \n");
    // for (int i = 0; i < 4; i++){
    //     puts(menu[i]);
    // }

    // 일주일치 급실메뉴 (3차원 배열)
    

    //버블 정렬
    int num[5] = {5, 2, 4, 1, 3};
    bubble_sort(num, 5);
    print_sort(num, 5);

    //문자열 정렬
    char names[4][20] = {"홍길동", "홍길서", "홍길남", "홍길북"};
    bubble_sort2(names, 4);
    print_sort2(names, 4);
    return 0;
}

void bubble_sort(int arr[], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - 1 - i; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        printf("===%d회전===\n", i + 1);
        print_sort(arr, size);
    }
}

void print_sort(int arr[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    puts("");
}

void bubble_sort2(char arr[][20], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - 1 - i; j++){
            if (strcmp(arr[j], arr[j + 1]) > 0){
                char temp[20];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
        printf("===%d회전(이름들!)===\n", i + 1);
        print_sort2(arr, size);
    }
}

void print_sort2(char arr[][20], int size){
    for (int i = 0; i < size; i++){
        printf("%s ", arr[i]);
    }
    puts("");
}
