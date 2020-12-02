#include<stdio.h>
int fact(int n)
{
    if (n!=0)
        return n*fact(n-1);
    else if(n<=0)
        return 1;
    else
        printf("invalid input\n") ;
        return 0;
}
int main()
{
    printf("enter the number of which you want to find the factorial of \n");
    int m;
    scanf("%d",&m);
    int res=fact(m);
    printf ("factorial of %d is %d",m,res);
}
