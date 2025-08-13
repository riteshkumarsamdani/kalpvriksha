#include<stdio.h>
int main(){
    int year;
    printf("enter year to find leap year or not\n");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||year%400==0){
        printf("provided year %d is leap year\n",year);
    }
    else{
        printf("provided year %d is not leap year\n",year);
    }
    return 0;
}