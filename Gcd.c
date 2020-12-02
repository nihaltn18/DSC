#include<stdio.h>
int gcd(int a,int b)
{
    if(b!=0)
        return gcd(b,a%b);
    else
        return a;
}
int main()
{
printf("enter two numbers of which you need to find the gcd of\n");
int m,n;
scanf("%d%d",&m,&n);
int z=gcd(m,n);
printf ("gcd of %d and %d is %d",m,n,z);
}
