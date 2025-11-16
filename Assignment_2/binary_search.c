#include <stdio.h>

int main() {
    int n, key, start, end, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements in sorted order:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    start = 0;
    end = n - 1;

    while(start <= end) {
        mid = (start + end) / 2;

        if(arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    printf("Element not found.\n");

    return 0;
}
