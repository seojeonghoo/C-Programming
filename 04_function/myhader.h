int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

float div(int a, int b){
    return (float)a / b;
}






int is_alpha(char c){
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int is_number(char c){
    return c >= '0' && c <= '9';
}