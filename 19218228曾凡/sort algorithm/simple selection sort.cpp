#include"head.h"
void SelectSort(SqList &L)
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
