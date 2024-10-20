/*************************************************************************
	> File Name: 4_10_stringf.c
	> Author:XUYIFENG 
	> Mail: 13799653551@163.com
	> Created Time: Sat 19 Oct 2024 09:48:13 PM CST
 ************************************************************************/

#include<stdio.h>
#define BLURB "Authentic imitation!"
int main(void){
    printf("[%2s]\n",BLURB);
    printf("[%24s]\n",BLURB);
    printf("[%-24.5s]\n",BLURB);
    return 0;
}
