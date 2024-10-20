/*************************************************************************
	> File Name: 4_4_pizza.c
	> Author:XUYIFENG 
	> Mail: 13799653551@163.com
	> Created Time: Sat 19 Oct 2024 11:16:07 AM CST
 ************************************************************************/

#include<stdio.h>
#define PI 3.14159 
int main(void)
{
    float area,circum,radius;
    printf("What is the radius of your pizza?\n");
    scanf("%f",&radius);
    area = PI*radius*radius;
    circum = 2.0*PI*radius;
    printf("Your basic pizza parameters are as follow:\n");
    printf("circumference = %1.2f,area = %1.2f\n",circum,area);
    return 0;
}
