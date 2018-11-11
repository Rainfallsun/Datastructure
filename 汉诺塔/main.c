#include <stdio.h>

void hanota(int n,char A,char B,char C)
{
    if(1==n)
        printf("将编号为%d的盘子从%c柱子转移到%c柱子。\n",n,A,C);
    else
    {
        hanota(n-1,A,C,B);
        printf("将编号为%d的盘子从%c柱子转移到%c柱子。\n",n-1,A,C);
        hanota(n-1,B,A,C);
    }

}

int main(void)
{
    int ch1="A";
    int ch2="B";
    int ch3="C";
    int n;

    printf("请输入要运动盘子的个数：");
    scanf("%d",&n);
    hanota(n,'A','B','C');

    return 0;
}
