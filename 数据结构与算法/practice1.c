#include<stdio.h>
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int a,b;
    a=10;b=5;
    printf("%d,%d\n",a,b);
    swap(&a,&b);
    printf("%d,%d\n",a,b);
    return 0;
}