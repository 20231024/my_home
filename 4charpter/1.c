/*************************************************************************
	> File Name: 1.c
	> Author:XUYIFENG 
	> Mail: 13799653551@163.com
	> Created Time: Fri 18 Oct 2024 09:43:37 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 9; i++)
    {
        int sum1 = 1 * 1000 + 10 * i + 9;
        int sum2 = 9 * 1000 + 100 * i + 1;
        if (sum2 / sum1 == 9)
        {
            printf("%d\n", sum1);
        }
    }
    printf("%d\n", (8 / 3));


    return 0;
}
