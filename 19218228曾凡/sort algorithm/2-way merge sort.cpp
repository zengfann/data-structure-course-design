#include"head.h"
RedType TR[400000];
void Merge( RedType SR[],int left,int mid,int right)
//将SR分成前半部分和后半部分，将其合并到一个全局变量有序表中
{
	int i=left,j=mid+1,k=1;
	while(i<=mid && j<=right)
	{
		if(SR[i].key<=SR[j].key)
		{
			TR[k++]=SR[i++];
		}
		else
		{
			TR[k++]=SR[j++];
		}
	}
	while(i<=mid)//把前半部分剩下的元素接在表后
	{
		TR[k++]=SR[i++];
	}
	while(j<=right)//把后半部分剩下的元素接在表后
	{
		TR[k++]=SR[j++];
	}
	k=1;
	for(i=left;i<=right;i++)//把有序新表放入原有的顺序表
	{
		SR[i]=TR[k++];
	}
}
void MSort(RedType SR[],int s,int t)
{
	int m;
	if(s<t)
	{
		m=(s+t)/2;
		MSort(SR,s,m);
		MSort(SR,m+1,t);
		Merge(SR,s,m,t);
	}
}
void MergeSort(SqList &L)
{
	MSort(L.r,1,L.length);
}