#include<stdio.h>
typedef struct
{
	char name[5];
	int a;
	int b;
}man;
int main()
{
	man m;
	int i, n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d",m.name,&m.a,&m.b);
		if(m.a<15||m.a>20||m.b<50||m.b>70)
			printf("%s\n",m.name);
	}
	return 0;
}
