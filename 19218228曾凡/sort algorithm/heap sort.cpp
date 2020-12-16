#include"head.h"
void HeapAdjust(HeapType &H,int s,int m)
{
	int j;
	RedType rc=H.r[s];
	for(j=2*s ;j<=m;j*=2)//���������1�ŵ�Ԫ��ʼ�洢��j��ǵ���s������
	{
		if(j<m && H.r[j].key<H.r[j+1].key)//ѡ�����Һ����нϴ����һ��
		{
			j++;
		}
		if(rc.key>=H.r[j].key)
		{
			break;
		}
		H.r[s]=H.r[j];//�����Һ��ӱ�����ڵ�󣬽���
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
	for(i=H.length;i>1;i--)//ÿ��HeapAdjust������Ԫ�طŵ����ڵ�֮���ٺ����һ���ڵ㽻��
	{
		temp=H.r[1];
		H.r[1]=H.r[i];
		H.r[i]=temp;
		HeapAdjust(H,1,i-1);
	}
}