#include <stdio.h>
int main(){
    int age;
    printf("Enter the age of a candidate:");
    scanf("%d",& age);
    if(age>=18){
        printf("The candidate is eligible for vote.\n");
    }
    else{
        printf("The candidate is not eligible for vote.\n");
    }
    return 0;
}