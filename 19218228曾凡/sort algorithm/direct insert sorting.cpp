#include"head.h"
void InsertSort(SqList &L)
{
	int i,j;
	for(i=2;i<=L.length;i++)
	{
		if(L.r[i].key<L.r[i-1].key)
		{
			L.r[0]=L.r[i];
			L.r[i]=L.r[i-1];
			for(j=i-2;L.r[0].key<L.r[j].key;j--)
			{
				L.r[j+1]=L.r[j];
			}
			L.r[j+1]=L.r[0];
		}
	}
}
