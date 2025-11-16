#include <stdio.h>
int main() {
    int n;

    again:
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if(n <= 0)
        goto again;

    printf("You entered: %d", n);
    return 0;
}
