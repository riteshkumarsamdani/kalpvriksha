#include<stdio.h>
int main(){
    const double PI=3.14;
    double radius,parameter,area;
    printf("enter radius to find area and parimeter of circle\n");
    scanf("%lf",&radius);
    area=PI*radius*radius;
    parameter=2*PI*radius;
    printf("parameter of the circle is %.2lf\n",parameter);
    printf("area of the circle is %.2lf\n",area);
    return 0;
}