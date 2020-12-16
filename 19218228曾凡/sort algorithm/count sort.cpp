#include"head.h"

void countsort(SqList &L,int n)
{
	long *c,*b;
	int max=L.r[0].key;
	for(int i=1;i<n;i++)
	{
		if(L.r[i].key>max)
		{
			max=L.r[i].key;
		}
	}
	c=(long*)malloc(sizeof(long)*max);
	b=(long*)malloc(sizeof(long)*n);
	for(i=0;i<max;i++)
	{
		c[i]=0;
	}
	for(i=0;i<n;i++)
	{
		c[L.r[i].key]+=1;
	}
	for(i=1;i<max;i++)
	{
		c[i]=c[i-1]+c[i];
	}
	for(i=n-1;i>=0;i--)
	{
		b[c[L.r[i].key]-1]=L.r[i].key;
	    c[L.r[i].key]-=1;
	}
	for(i=0;i<n;i++)
	{
		L.r[i].key=b[i];
	}
}
