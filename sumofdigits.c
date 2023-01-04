#include<stdio.h>
int main()
{
    int sum=0;
    int x=12121;
    while(x)
    {
        sum+=x%10;
        x/=10;
    }
    printf("%d",sum);
}