#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int fact=1;
    while(num>0){
        fact =fact* num;
        num--;
    }
    printf("Factorial =%d",fact);
    return 0;
}