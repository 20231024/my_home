/*************************************************************************
	> File Name: 3.11.1.c
	> Author:XUYIFENG 
	> Mail: 13799653551@163.com
	> Created Time: Fri 18 Oct 2024 04:43:17 PM CST
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    int maxInt = INT_MAX;
    printf("INT_MAX is %d\n",maxInt);
    printf("INT_MAX+1=%d\n",maxInt + 1);

    double minValue = DBL_MIN;
    printf("DBL_MIN id %e\n",minValue);
    printf("DBL_MIN/1e50 is %e\n",minValue/ 1e50);
return 0;
}

