#include<stdio.h>
int main(){
    int arr[6]={58,12,91,4,77,30};
    int max=arr[0];
    for(int i=1;i<6;i++){
        if(max<arr[i]){
            max=arr[i];
        }

    }
    printf("The max value %d",max);
    return 0;
}