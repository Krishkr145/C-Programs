#include <stdio.h>
int main() {
    int num, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        rem = num % 10;   
        sum = sum + rem;  
        num = num / 10;   
    } while (num != 0);

    printf("Sum of digits = %d\n", sum);

    return 0;
}
