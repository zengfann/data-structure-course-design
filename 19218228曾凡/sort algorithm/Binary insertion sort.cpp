#include"head.h"
void BInsertSort(SqList &L)
{
	int i,j,m;
	int low,high;
	for(i=2;i<=L.length;i++)
	{
		L.r[0]=L.r[i];//把当前值给哨兵
		low=1;
		high=i-1;
		while(low<=high)                      
		{                         
			m=(low+high)/2;
			if(L.r[0].key<L.r[m].key)
			{
				high=m-1;
			}	
			else
			{
				low=m+1;
			}
		}
		for(j=i-1;j>=high+1;j--)
		{
			L.r[j+1]=L.r[j];
		}
		L.r[high+1]=L.r[0];
	}
}