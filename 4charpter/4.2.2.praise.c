/*************************************************************************
	> File Name: praise1.c
	> Author:XUYIFENG 
	> Mail: 13799653551@163.com
	> Created Time: Fri 18 Oct 2024 06:01:47 PM CST
 ************************************************************************/

#include<stdio.h>
#define PRAISE "You are an extraodinaru being."
int main(void){
    char name[40];
    printf("What's your name? ");
    scanf("%s",name);
    printf("hello,%s.%s\n",name,PRAISE);
    return 0;
}
