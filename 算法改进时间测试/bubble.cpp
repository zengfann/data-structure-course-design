#include"head.h"
void bubblesort1(SqList &L)
{
	int i,j,temp;
	for(i=1;i<=L.length;i++)//循环次数 即顺序表中所含元素个数
	{
		for(j=1;j<=L.length-i;j++)//每次循环 共扫描几个元素
		{
			if(L.r[j].key>L.r[j+1].key)
			{
				temp=L.r[j].key;
				L.r[j].key=L.r[j+1].key;
				L.r[j+1].key=temp;
			}
		}
	}
}
void bubblesort2(SqList &L)
{
	int low=1;
	int high=L.length;
	RedType temp;
	int i;
	while(low<=high)
	{
		for(i=low;i<high;i++)
		{
			if(L.r[i].key>L.r[i+1].key)
			{
				temp=L.r[i];
				L.r[i]=L.r[i+1];
				L.r[i+1]=temp;
			}		
		}
		--high;
		for(i=high;i>low;i--)
		{
			if(L.r[i].key<L.r[i+1].key)
			{
				temp=L.r[i];
				L.r[i]=L.r[i+1];
				L.r[i+1]=temp;
			}
		}	
		++low;
	}
}