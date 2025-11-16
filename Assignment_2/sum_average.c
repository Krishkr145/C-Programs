#include<stdio.h>
int main(){
    int n,sum=0,average;
    int arr[n];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("Enter the element %d:",i+1);

    }

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("%d is the sum of the elements of the Array:",sum);
    average=sum/n;
    printf("%d is the average of the elements of the Array",average);
    return 0;


}