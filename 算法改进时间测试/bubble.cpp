#include"head.h"
void bubblesort1(SqList &L)
{
	int i,j,temp;
	for(i=1;i<=L.length;i++)//ѭ������ ��˳���������Ԫ�ظ���
	{
		for(j=1;j<=L.length-i;j++)//ÿ��ѭ�� ��ɨ�輸��Ԫ��
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