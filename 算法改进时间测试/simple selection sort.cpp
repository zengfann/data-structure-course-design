#include"head.h"
void SelectSort1(SqList &L)
{
	int i,j,min;
	for(i=1;i<=L.length;i++)
	{
		min=i;
		for(j=i+1;j<=L.length;j++)
		{
			if(L.r[min].key>L.r[j].key)
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp=L.r[i].key;
			L.r[i].key=L.r[min].key;
			L.r[min].key=temp;
		}
	}
}
void SelectSort2(SqList &L)
{
	int i,j,min,max;
	RedType temp;
	for(i=1;i<=L.length/2;i++)
	{
		min=i;
		max=i;
		for(j=i+1;j<=L.length-i;j++)
		{
			if(L.r[j].key>L.r[max].key)
			{
				max=j;
				continue;
			}
			if(L.r[j].key<L.r[min].key)
			{
				min=j;
			}
		}	
		temp=L.r[i];
		L.r[i]=L.r[min];
		L.r[min]=temp;
		
		temp=L.r[L.length-i];
		L.r[L.length-i]=L.r[max];
		L.r[max]=temp;
	}

}