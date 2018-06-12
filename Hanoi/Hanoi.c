#include<stdio.h>

int k=0;
void Hanoi(int n,char a,char b,char c)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        Hanoi(n-1,a,c,b);
        k++;
        printf("%d:From %c to %c\n",k,a,c);
        Hanoi(n-1,b,a,c);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    Hanoi(n,'A','B','C');
    return 0;
}
