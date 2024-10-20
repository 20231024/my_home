/*************************************************************************
	> File Name: 4.7.width.c
	> Author:XUYIFENG 
	> Mail: 13799653551@163.com
	> Created Time: Sat 19 Oct 2024 08:02:08 PM CST
 ************************************************************************/

#include<stdio.h>
#define PAGES 959 
int main(void){
    printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);//输出958,超过了
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);
return 0;
}
