#include"head.h"


int max(SqList &L,int n)
{
	int max=L.r[0].key;
	for(int i=1;i<n;i++)
	{
		if(L.r[i].key>max)
		{
			max=L.r[i].key;
		}
	}
	return max;
}

void bucketsort(SqList &L,int n)
{
	int i,j;
	int *bucket;
	int count=max(L,n)+1; 
	bucket=(int*)malloc(count*sizeof(int)); //��ÿ�Ͱ��С
	for(i=0;i<count;i++)
	{
		bucket[i]=0; //��Ͱ��ʼ��
	}
	for(i=0;i<n;i++)
	{
		bucket[L.r[i].key]++;//Ѱ�����У����Ұ���Ŀһ��һ���ŵ���Ӧ��Ͱ��ȥ��
	}
	for(i=0,j=0;i<count;i++)
	{
		while(bucket[i]!=0) //��ÿ�����ǿյ�Ͱ�ӽ�������
		{
			L.r[j].key=i;//�Ӳ��ǿյ�Ͱ�������Ŀ�ٷŻ�ԭ���������С�
			j++;
			bucket[i]--;
		}
	}
	free(bucket);
}


