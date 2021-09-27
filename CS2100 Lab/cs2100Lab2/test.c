#include <stdio.h>

int main() {
    char arr[] = { 'a', 'b', 'c' };
    
    char *arr_p0 = &arr[0];

    int num = 4;

    printf("%zu\n", sizeof(num));
    printf("%c\n", *arr);
    printf("%c\n", arr[0]);
    printf("%p\n", &arr);
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
} 

