#include <stdio.h>
int isPrime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("The number is prime.\n");
    else
        printf("The number is not prime.\n");

    return 0;
}
