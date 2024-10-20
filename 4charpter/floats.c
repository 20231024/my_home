/*************************************************************************
	> File Name: floats.c
	> Author:XUYIFENG 
	> Mail: 13799653551@163.com
	> Created Time: Sat 19 Oct 2024 09:02:47 PM CST
 ************************************************************************/

#include<stdio.h>
int main(void){
    const double RENT = 3852.99;
    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%10.3E*\n",RENT);
    printf("*%+4.3f*\n",RENT);
    printf("*%010.2f*\n",RENT);
    return 0;
}
