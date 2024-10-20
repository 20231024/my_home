/*************************************************************************
	> File Name: 4_5_defines.c
	> Author:XUYIFENG 
	> Mail: 13799653551@163.com
	> Created Time: Sat 19 Oct 2024 01:22:55 PM CST
 ************************************************************************/

#include<stdio.h>
//使用limit.h和float头文件定义的表明常量
#include<limits.h>
#include<float.h>
int main(void){
    printf("Some number limits for this system:\n");
    printf("Biggest int:%d\n",INT_MAX);
    printf("One byte = %d bits On this system.\n",CHAR_BIT);
    printf("Smalllest long long :%lld\n",LLONG_MIN);
    printf("float precision %d digits\n",FLT_DIG);
    printf("float epsilon = %e\n",FLT_EPSILON);
    return 0;
}


