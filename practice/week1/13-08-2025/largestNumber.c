#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three number to compare\n");
    printf("enter number 1\n");
    scanf("%d",&a);
    printf("enter number 2\n");
    scanf("%d",&b);
    printf("enter number 3\n");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("largest number among %d %d %d is %d\n",a,b,c,a);
        }
        else{
            printf("largest number among %d %d %d is %d\n",a,b,c,c);
        }
    }
    else{
        if(b>c){
            printf("largest number among %d %d %d is %d\n",a,b,c,b);
        }
        else{
            printf("largest number among %d %d %d is %d\n",a,b,c,c);
        }
    }
}