#include"head.h"

int maxbit(SqList &L,int n)//���������������ݵ����λ��
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

//��������
void radixsort(SqList &L,int len)
{
	int d=maxbit(L,len);
	long *temp=(long*)malloc(len*sizeof(long));
	long *count=(long*)malloc(10*sizeof(long));//������,10��Ͱ 
	long i,j,k;
	int radix=1;
	for(i=0;i<d;i++)  //����d������
	{
		for(j=0;j<10;j++) //ÿ�η���ǰ��ռ�����
		{
			count[j]=0;
		}
		for(j=0;j<len;j++)  //ͳ��ÿ��Ͱ�еļ�¼��
		{
			k=(L.r[j].key/radix)%10;
			count[k]++;
		}
		for(j=1;j<10;j++)//��tmp�е�λ�����η����ÿ��Ͱ 
		{
			count[j]=count[j-1]+count[j];
		}
		for(j=len-1;j>=0;j--)//������Ͱ�м�¼�����ռ���tmp��
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




