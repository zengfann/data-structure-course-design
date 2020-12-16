#include"head.h"


int main()
{
	int MAXSIZE=0;//���������ֵ�����
	SqList L;//������ݵĽṹ������(˳���)
	clock_t start,finish;//time.h�м�ʱ����

	double duration;//����ʱ�����
	int dlta[5]={9,7,5,3,1};//shell sort�����õ��ļ��
	int i,temp;
	
	//��10000���������������
	printf("������Ϊ10000ʱ:\n");
	FILE *fp=fopen("d:\\txt\\rand1.txt","w");//Ϊ�����һ���ı��ļ�
	FILE *fp2=NULL;
	int len1=MAXSIZE1;
	srand(time(NULL));
	for(i=1;i<=MAXSIZE1;i++)
	{
		temp=rand()%10+1 ;
		fprintf(fp,"%d\t",temp);
		L.r[i].key=temp;
	}	
	L.length=MAXSIZE1;
	fclose(fp);
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	//ֱ�Ӳ�������
	start=clock();InsertSort(L);finish=clock();printf("ֱ�Ӳ�����������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort1.txt","w");

	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);

	//�۰��������
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\t",&L.r[i].key);
	}
	fclose(fp);
	start=clock();BInsertSort(L);finish=clock();printf("�۰������������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort2.txt","w");
	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//ϣ������
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();ShellSort(L,dlta,5);finish=clock();printf("ϣ����������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort3.txt","w");
	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}

	//ð������
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bubblesort(L);finish=clock();printf("ð����������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort4.txt","w");
	for (i = 1; i<=MAXSIZE1;i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//��������
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();quicksort(L,8);finish=clock();printf("������������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort5.txt","w");
	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//��ѡ������
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();SelectSort(L);finish=clock();printf("��ѡ����������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort6.txt","w");
	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//������
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();HeapSort(L);finish=clock();printf("����������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort7.txt","w");
	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//��·�鲢����
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();MergeSort(L);finish=clock();printf("��·�鲢����ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort8.txt","w");
	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);


    /*��������
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=0;i<MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();countsort(L,len1);finish=clock();printf("������������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort9.txt","w");
	for (i = 0; i<MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);*/
	//��������
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=0;i<MAXSIZE1;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();radixsort(L,len1);finish=clock();printf("������������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort9.txt","w");
	for (i = 0; i<MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//Ͱ����
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=0;i<MAXSIZE1;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bucketsort(L,len1);finish=clock();printf("Ͱ������������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort10.txt","w");
	for (i = 0; i<MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);


	


	//��50000���������������
	printf("\n������Ϊ50000ʱ:\n");
	fp=fopen("d:\\txt\\rand2.txt","w");//Ϊ�����һ���ı��ļ�
	fp2=NULL;
	int len2=MAXSIZE2;
	
	srand(time(NULL));
	for(i=1;i<=MAXSIZE2;i++)
	{
		temp=rand();
		fprintf(fp,"%d\t",temp);
	}
	L.length=MAXSIZE2;
	fclose(fp);
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	//ֱ�Ӳ�������
	start=clock();InsertSort(L);finish=clock();printf("ֱ�Ӳ�����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort1.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	
	//�۰��������
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();BInsertSort(L);finish=clock();printf("�۰������������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort2.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//ϣ������
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();ShellSort(L,dlta,5);finish=clock();printf("ϣ����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort3.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}

	//ð������
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bubblesort(L);finish=clock();printf("ð����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort4.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//��������
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();quicksort(L,8);finish=clock();printf("������������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort5.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//��ѡ������
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();SelectSort(L);finish=clock();printf("��ѡ����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort6.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	//������
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();HeapSort(L);finish=clock();printf("����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort7.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//��·�鲢����
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();MergeSort(L);finish=clock();printf("��·�鲢����ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort8.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//��������
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=0;i<MAXSIZE2;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();radixsort(L,len2);finish=clock();printf("������������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\2\\sort9.txt","w");
	for (i = 0; i<MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//Ͱ����
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=0;i<MAXSIZE2;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bucketsort(L,len2);finish=clock();printf("Ͱ������������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\2\\sort10.txt","w");
	for (i = 0; i<MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);

	


	//��100000���������������
	printf("\n������Ϊ100000ʱ:\n");
	fp=fopen("d:\\txt\\rand3.txt","w");//Ϊ�����һ���ı��ļ�
	fp2=NULL;
	int len3=MAXSIZE3;
	
	srand(time(NULL));
	for(i=1;i<=MAXSIZE3;i++)
	{
		temp=rand();
		fprintf(fp,"%d\t",temp);
	}
	L.length=MAXSIZE3;
	fclose(fp);
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	//ֱ�Ӳ�������
	start=clock();InsertSort(L);finish=clock();printf("ֱ�Ӳ�����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort1.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	
	//�۰��������
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();BInsertSort(L);finish=clock();printf("�۰������������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort2.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//ϣ������
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();ShellSort(L,dlta,5);finish=clock();printf("ϣ����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort3.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}

	//ð������
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bubblesort(L);finish=clock();printf("ð����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort4.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//��������
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();quicksort(L,8);finish=clock();printf("������������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort5.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//��ѡ������
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();SelectSort(L);finish=clock();printf("��ѡ����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort6.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	//������
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();HeapSort(L);finish=clock();printf("����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort7.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//��·�鲢����
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();MergeSort(L);finish=clock();printf("��·�鲢����ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort8.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//��������
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=0;i<MAXSIZE3;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();radixsort(L,len3);finish=clock();printf("������������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\3\\sort9.txt","w");
	for (i = 0; i<MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//Ͱ����
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=0;i<MAXSIZE3;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bucketsort(L,len3);finish=clock();printf("Ͱ������������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\3\\sort10.txt","w");
	for (i = 0; i<MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);


	//��200000���������������
	printf("\n������Ϊ200000ʱ:\n");
	fp=fopen("d:\\txt\\rand4.txt","w");//Ϊ�����һ���ı��ļ�
	fp2=NULL;
	int len4=MAXSIZE4;
	
	srand(time(NULL));
	for(i=1;i<=MAXSIZE4;i++)
	{
		temp=rand();
		fprintf(fp,"%d\t",temp);
	}
	L.length=MAXSIZE4;
	fclose(fp);
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	
	//ֱ�Ӳ�������
	start=clock();InsertSort(L);finish=clock();printf("ֱ�Ӳ�����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort1.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	
	//�۰��������
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();BInsertSort(L);finish=clock();printf("�۰������������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort2.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//ϣ������
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();ShellSort(L,dlta,5);finish=clock();printf("ϣ����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort3.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}

	//ð������
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bubblesort(L);finish=clock();printf("ð����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort4.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}

	//��������
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();quicksort(L,8);finish=clock();printf("������������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort5.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//��ѡ������
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();SelectSort(L);finish=clock();printf("��ѡ����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort6.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//������
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();HeapSort(L);finish=clock();printf("����������ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort7.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//��·�鲢����
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();MergeSort(L);finish=clock();printf("��·�鲢����ʱ��Ϊ:%f��\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort8.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//��������
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=0;i<MAXSIZE4;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();radixsort(L,len4);finish=clock();printf("������������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\4\\sort9.txt","w");
	for (i = 0; i<MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//Ͱ����
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=0;i<MAXSIZE4;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bucketsort(L,len4);finish=clock();printf("Ͱ������������ʱ��Ϊ:%f��\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\4\\sort10.txt","w");
	for (i = 0; i<MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);

	return 0;	
	
}

