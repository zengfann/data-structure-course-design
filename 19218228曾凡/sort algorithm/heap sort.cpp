#include"head.h"
void HeapAdjust(HeapType &H,int s,int m)
{
	int j;
	RedType rc=H.r[s];
	for(j=2*s ;j<=m;j*=2)//由于数组从1号单元开始存储，j标记的是s的左孩子
	{
		if(j<m && H.r[j].key<H.r[j+1].key)//选出左右孩子中较大的那一个
		{
			j++;
		}
		if(rc.key>=H.r[j].key)
		{
			break;
		}
		H.r[s]=H.r[j];//若左右孩子比其根节点大，交换
		s=j;
	}
	H.r[s]=rc;
}
void HeapSort(HeapType &H)
{
	RedType temp;
	int i;
	for(i=H.length/2;i>0;i--)
	{
		HeapAdjust(H,i,H.length);
	}
	for(i=H.length;i>1;i--)//每趟HeapAdjust将最大的元素放到根节点之后再和最后一个节点交换
	{
		temp=H.r[1];
		H.r[1]=H.r[i];
		H.r[i]=temp;
		HeapAdjust(H,1,i-1);
	}
}