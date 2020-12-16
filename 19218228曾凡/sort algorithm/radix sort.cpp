#include"head.h"

int maxbit(SqList &L,int n)//辅助函数，求数据的最大位数
{
	int d=1,i=0;
	int p=10;
	for(i=1;i<=n;i++)
	{
		while(L.r[i].key>=p)
		{
			p*=10;
			d++;
		}
	}
	return d;
}

//基数排序
void radixsort(SqList &L,int len)
{
	int d=maxbit(L,len);
	long *temp=(long*)malloc(len*sizeof(long));
	long *count=(long*)malloc(10*sizeof(long));//计数器,10个桶 
	long i,j,k;
	int radix=1;
	for(i=0;i<d;i++)  //进行d次排序
	{
		for(j=0;j<10;j++) //每次分配前清空计数器
		{
			count[j]=0;
		}
		for(j=0;j<len;j++)  //统计每个桶中的记录数
		{
			k=(L.r[j].key/radix)%10;
			count[k]++;
		}
		for(j=1;j<10;j++)//将tmp中的位置依次分配给每个桶 
		{
			count[j]=count[j-1]+count[j];
		}
		for(j=len-1;j>=0;j--)//将所有桶中记录依次收集到tmp中
		{
			k=(L.r[j].key/radix)%10;
			count[k]--;
			temp[count[k]]=L.r[j].key;
		}
		for(j=0;j<len;j++)
		{
			L.r[j].key=temp[j];
		}
		radix=radix*10;
	}
	free(temp);
	free(count);
}




