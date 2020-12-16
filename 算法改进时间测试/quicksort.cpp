#include"head.h"
int Partition(SqList &L,int low,int high)
{
	int pivotkey;
	L.r[0]=L.r[low];
	pivotkey=L.r[low].key;
	while(low<high)
	{
		while(low<high && L.r[high].key>=pivotkey)
		{
			high--;
		}
		L.r[low]=L.r[high];
		while(low<high && L.r[low].key<=pivotkey)
		{
			low++;
		}
		L.r[high]=L.r[low];
	}
	L.r[low]=L.r[0];
	return low;
}
void quicksort1(SqList &L,int low,int high)
{
	int pivotloc;
	if(low<high)
	{
		pivotloc=Partition(L,low,high);
		quicksort1(L,low,pivotloc-1);
		quicksort1(L,pivotloc+1,high);
	}

}
void qsort_improve(SqList &L,int low,int high,int k)
{
	if(high-low>k)
	{
		int pivot=Partition(L,low,high);
		qsort_improve(L,low,pivot-1,k);
		qsort_improve(L,pivot+1,high,k);
	}
}
void quicksort2(SqList &L,int k)
{
	qsort_improve(L,1,L.length,k);
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