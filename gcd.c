#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}

int main()
{
    printf("gcd of 10 and 20 is %d \n",gcd(10,20));
}