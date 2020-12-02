#include<stdio.h>
int first=0,second=1;
int fib(int n)
{
    if (n==0)
        return ;
    else
    {
        int temp=first+second;
        printf ("%d\n",temp);
        n=n-1;
        first=second;
        second=temp;
        fib(n);
    }
}
int main()
{
    printf ("enter the number of terms in the Fibonacci sequence\n");
    int k;
    scanf("%d",&k);
    if (k>=0)
    {   if (k==0)
            return;
        else if(k==1)
            printf ("%d",0);
        else
        {   printf("%d\n",0);
            printf("%d\n",1);
            fib(k-2);
        }
    }
    else
        printf ("invalid input\n");
    }
