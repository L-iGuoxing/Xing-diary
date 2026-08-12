#include<stdio.h>
typedef struct{
	int x;
	int y;
}po;
int main()
{
	po p;
	p.x=5;
	p.y=6;
	printf("%d",p.x);
	return 0;
}
