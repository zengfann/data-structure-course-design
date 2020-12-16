#include"head.h"
RedType TR[400000];
void Merge( RedType SR[],int left,int mid,int right)
//��SR�ֳ�ǰ�벿�ֺͺ�벿�֣�����ϲ���һ��ȫ�ֱ����������
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
	while(i<=mid)//��ǰ�벿��ʣ�µ�Ԫ�ؽ��ڱ��
	{
		TR[k++]=SR[i++];
	}
	while(j<=right)//�Ѻ�벿��ʣ�µ�Ԫ�ؽ��ڱ��
	{
		TR[k++]=SR[j++];
	}
	k=1;
	for(i=left;i<=right;i++)//�������±����ԭ�е�˳���
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