#include <stdio.h>

int main() {
    float costPrice, sellingPrice;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        printf("Profit = %.2f\n", sellingPrice - costPrice);
        printf("Profit Percentage = %.2f%%\n", ((sellingPrice - costPrice) / costPrice) * 100);
    } 
    else if (costPrice > sellingPrice) {
        printf("Loss = %.2f\n", costPrice - sellingPrice);
        printf("Loss Percentage = %.2f%%\n", ((costPrice - sellingPrice) / costPrice) * 100);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
