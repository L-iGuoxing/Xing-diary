#include<stdio.h>
int main()
{
	struct loc{
	int x;
	int y;
	int z;
};
	struct loc p;
	p.x=1;
	p.y=2;
	p.z=3;
	struct loc *pp;
	pp=&p;
	(*pp).x=2;
	printf("%d",pp->x);
	return 0;
}
