#include"head.h"
int main()
{
	int MAXSIZE=0;//���������ֵ�����
	SqList L;//������ݵĽṹ������(˳���)
	clock_t start,finish;//time.h�м�ʱ����

	double duration;//����ʱ�����
	int dlta[5]={9,7,5,3,1};//shell sort�����õ��ļ��
	int i,temp;
	FILE *fp=fopen("D:\\txt\\rand1.txt","w");//Ϊ�����һ���ı��ļ�
	FILE *fp2=NULL;
	
	srand(time(NULL));
	for(i=1;i<=MAXSIZE4;i++)
	{
		temp=rand();
		fprintf(fp,"%d\t",temp);
	}	
	L.length=MAXSIZE4;
	fclose(fp);
    fp=fopen("D:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bubblesort1(L);finish=clock();printf("ð����������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp=fopen("D:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bubblesort2(L);finish=clock();printf("ð����������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));


    //��������
	fp=fopen("D:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();quicksort1(L,1,L.length);finish=clock();printf("������������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp=fopen("D:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();quicksort2(L,8);finish=clock();printf("������������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	return 0;
}