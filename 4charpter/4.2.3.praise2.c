/*************************************************************************
	> File Name: 4.2.3.praise2.c
	> Author:XUYIFENG 
	> Mail: 13799653551@163.com
	> Created Time: Fri 18 Oct 2024 08:29:08 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraordinaty being."
int main(void){
    char name[40];
    printf("What's your name?");
    scanf("%s",name);
    printf("Your name of %zd letters occupies %zd menory cells.\n",strlen(name),sizeof name);
    printf("and occupies %zd memory cells.\n",sizeof PRAISE);
    return 0;
    
}
