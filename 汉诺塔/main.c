#include <stdio.h>

void hanota(int n,char A,char B,char C)
{
    if(1==n)
        printf("�����Ϊ%d�����Ӵ�%c����ת�Ƶ�%c���ӡ�\n",n,A,C);
    else
    {
        hanota(n-1,A,C,B);
        printf("�����Ϊ%d�����Ӵ�%c����ת�Ƶ�%c���ӡ�\n",n-1,A,C);
        hanota(n-1,B,A,C);
    }

}

int main(void)
{
    int ch1="A";
    int ch2="B";
    int ch3="C";
    int n;

    printf("������Ҫ�˶����ӵĸ�����");
    scanf("%d",&n);
    hanota(n,'A','B','C');

    return 0;
}
