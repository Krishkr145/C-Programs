#include<stdio.h>
int main(){
    int a1,a2,a3;
    printf("The angles of Triangle a1,a2,a3:\n");
    scanf("%d %d %d",&a1,&a2,&a3);
    if((a1+a2+a3==180)&&(a1>=0 && a2>=0 && a3>=0)){
        printf("This is a valid triangle");
    }
    else{
        printf("This is not a valid triangle");
    }
    return 0;
}