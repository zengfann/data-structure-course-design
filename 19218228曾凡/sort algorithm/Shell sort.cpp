#include"head.h"
void ShellInsert(SqList &L,int dk)
{
	int i,j;
	for(i=dk+1;i<=L.length;i++)
	{
		if(L.r[i].key<L.r[i-dk].key)
		{
			L.r[0]=L.r[i];
			for(j=i-dk; j>0 && L.r[0].key<L.r[j].key; j-=dk)
			{
				L.r[j+dk]=L.r[j];
			}
			L.r[j+dk]=L.r[0];
		}
	}
}
void ShellSort(SqList &L,int dlta[],int t)
{
	int k;
	for(k=0;k<t;k++)
	{
		ShellInsert(L,dlta[k]);
	}	
}