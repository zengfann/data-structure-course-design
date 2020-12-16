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
	bucket=(int*)malloc(count*sizeof(int)); //获得空桶大小
	for(i=0;i<count;i++)
	{
		bucket[i]=0; //空桶初始化
	}
	for(i=0;i<n;i++)
	{
		bucket[L.r[i].key]++;//寻访序列，并且把项目一个一个放到对应的桶子去。
	}
	for(i=0,j=0;i<count;i++)
	{
		while(bucket[i]!=0) //对每个不是空的桶子进行排序
		{
			L.r[j].key=i;//从不是空的桶子里把项目再放回原来的序列中。
			j++;
			bucket[i]--;
		}
	}
	free(bucket);
}


