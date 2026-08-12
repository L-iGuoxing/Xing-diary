#include<stdio.h>
int main()
{
	int a[]={10,11,12,13};
	int *p=a;
	for(int i=0;i<(sizeof(a)/sizeof(*p));i++)
		{
			printf("%d ",*(p+i));
}
	return 0;
}

