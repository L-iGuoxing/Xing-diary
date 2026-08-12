#include<stdio.h>
struct point
{
	int x;
	int y;
};
struct point location(int a,int b)
{
	struct point v;
	v.x=a;
	v.y=b;
	return v;
}
int main()
{

	struct point m=location(3,5);
	printf("%d %d",m.x,m.y);
	return 0;
}
