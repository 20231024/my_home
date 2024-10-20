/*************************************************************************
	> File Name: 3.c
	> Author:XUYIFENG 
	> Mail: 13799653551@163.com
	> Created Time: Fri 18 Oct 2024 11:00:40 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int N, a, b, t, gcd, lcm;
    printf("输入数组数");
    scanf("%d", &N);
    while (N > 0) {
        printf("请输入数组使用空格隔开");
        scanf("%d%d", &a, &b);
        
        // 计算最大公约数
        while (b != 0) {
            t = a % b;
            a = b;
            b = t;
        }
        gcd = a; // 最大公约数是最后的 a 值

        // 计算最小公倍数
        lcm = (a * b) / gcd;

        printf("最大公约数: %d ", gcd);
        printf("最小公倍数: %d ", lcm);
        printf("\n");
        N--;
    }
    return 0;
}
