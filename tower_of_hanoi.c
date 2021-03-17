#include<stdio.h>

void toh(int n,char from,char to,char aux)
{
    if(n==1)
    {
        printf("move disc from rod from %c to %c\n",from,to);
        return;
    }
    toh(n-1,from,aux,to);
    printf("move disc from rod from %c to %c\n",from,to);
    toh(n-1,aux,to,from);
}
int main()
{
    toh(3,'A','B','C');
}