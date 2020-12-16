#include"head.h"


int main()
{
	int MAXSIZE=0;//待排序数字的数量
	SqList L;//存放数据的结构体数组(顺序表)
	clock_t start,finish;//time.h中计时变量

	double duration;//排序时间变量
	int dlta[5]={9,7,5,3,1};//shell sort中所用到的间隔
	int i,temp;
	
	//对10000个随机数进行排序
	printf("排序量为10000时:\n");
	FILE *fp=fopen("d:\\txt\\rand1.txt","w");//为输出打开一个文本文件
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
	//直接插入排序
	start=clock();InsertSort(L);finish=clock();printf("直接插入排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort1.txt","w");

	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);

	//折半插入排序
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\t",&L.r[i].key);
	}
	fclose(fp);
	start=clock();BInsertSort(L);finish=clock();printf("折半插入排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort2.txt","w");
	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//希尔排序
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();ShellSort(L,dlta,5);finish=clock();printf("希尔排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort3.txt","w");
	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}

	//冒泡排序
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bubblesort(L);finish=clock();printf("冒泡排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort4.txt","w");
	for (i = 1; i<=MAXSIZE1;i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//快速排序
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();quicksort(L,8);finish=clock();printf("快速排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort5.txt","w");
	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//简单选择排序
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();SelectSort(L);finish=clock();printf("简单选择排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort6.txt","w");
	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//堆排序
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();HeapSort(L);finish=clock();printf("堆排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort7.txt","w");
	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//二路归并排序
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();MergeSort(L);finish=clock();printf("二路归并所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort8.txt","w");
	for (i = 1; i<=MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);


    /*计数排序
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=0;i<MAXSIZE1;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();countsort(L,len1);finish=clock();printf("计数排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort9.txt","w");
	for (i = 0; i<MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);*/
	//基数排序
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=0;i<MAXSIZE1;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();radixsort(L,len1);finish=clock();printf("基数排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort9.txt","w");
	for (i = 0; i<MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//桶排序
	fp=fopen("d:\\txt\\rand1.txt","r");
	for(i=0;i<MAXSIZE1;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bucketsort(L,len1);finish=clock();printf("桶排序排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\1\\sort10.txt","w");
	for (i = 0; i<MAXSIZE1; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);


	


	//对50000个随机数进行排序
	printf("\n排序量为50000时:\n");
	fp=fopen("d:\\txt\\rand2.txt","w");//为输出打开一个文本文件
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
	//直接插入排序
	start=clock();InsertSort(L);finish=clock();printf("直接插入排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort1.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	
	//折半插入排序
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();BInsertSort(L);finish=clock();printf("折半插入排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort2.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//希尔排序
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();ShellSort(L,dlta,5);finish=clock();printf("希尔排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort3.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}

	//冒泡排序
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bubblesort(L);finish=clock();printf("冒泡排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort4.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//快速排序
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();quicksort(L,8);finish=clock();printf("快速排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort5.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//简单选择排序
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();SelectSort(L);finish=clock();printf("简单选择排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort6.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	//堆排序
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();HeapSort(L);finish=clock();printf("堆排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort7.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//二路归并排序
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();MergeSort(L);finish=clock();printf("二路归并所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\2\\sort8.txt","w");
	for (i = 1; i<=MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//基数排序
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=0;i<MAXSIZE2;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();radixsort(L,len2);finish=clock();printf("基数排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\2\\sort9.txt","w");
	for (i = 0; i<MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//桶排序
	fp=fopen("d:\\txt\\rand2.txt","r");
	for(i=0;i<MAXSIZE2;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bucketsort(L,len2);finish=clock();printf("桶排序排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\2\\sort10.txt","w");
	for (i = 0; i<MAXSIZE2; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);

	


	//对100000个随机数进行排序
	printf("\n排序量为100000时:\n");
	fp=fopen("d:\\txt\\rand3.txt","w");//为输出打开一个文本文件
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
	//直接插入排序
	start=clock();InsertSort(L);finish=clock();printf("直接插入排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort1.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	
	//折半插入排序
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();BInsertSort(L);finish=clock();printf("折半插入排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort2.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//希尔排序
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();ShellSort(L,dlta,5);finish=clock();printf("希尔排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort3.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}

	//冒泡排序
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bubblesort(L);finish=clock();printf("冒泡排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort4.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//快速排序
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();quicksort(L,8);finish=clock();printf("快速排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort5.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//简单选择排序
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();SelectSort(L);finish=clock();printf("简单选择排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort6.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	//堆排序
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();HeapSort(L);finish=clock();printf("堆排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort7.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//二路归并排序
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=1;i<=MAXSIZE3;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();MergeSort(L);finish=clock();printf("二路归并所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\3\\sort8.txt","w");
	for (i = 1; i<=MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//基数排序
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=0;i<MAXSIZE3;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();radixsort(L,len3);finish=clock();printf("基数排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\3\\sort9.txt","w");
	for (i = 0; i<MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//桶排序
	fp=fopen("d:\\txt\\rand3.txt","r");
	for(i=0;i<MAXSIZE3;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bucketsort(L,len3);finish=clock();printf("桶排序排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\3\\sort10.txt","w");
	for (i = 0; i<MAXSIZE3; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);


	//对200000个随机数进行排序
	printf("\n排序量为200000时:\n");
	fp=fopen("d:\\txt\\rand4.txt","w");//为输出打开一个文本文件
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
	
	//直接插入排序
	start=clock();InsertSort(L);finish=clock();printf("直接插入排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort1.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	
	//折半插入排序
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();BInsertSort(L);finish=clock();printf("折半插入排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort2.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//希尔排序
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();ShellSort(L,dlta,5);finish=clock();printf("希尔排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort3.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}

	//冒泡排序
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bubblesort(L);finish=clock();printf("冒泡排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort4.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}

	//快速排序
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();quicksort(L,8);finish=clock();printf("快速排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort5.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//简单选择排序
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();SelectSort(L);finish=clock();printf("简单选择排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort6.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//堆排序
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();HeapSort(L);finish=clock();printf("堆排序所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort7.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	
	//二路归并排序
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();MergeSort(L);finish=clock();printf("二路归并所需时间为:%f。\n",duration=(double)(finish-start)/CLOCKS_PER_SEC);
	fp2=fopen("d:\\txt\\4\\sort8.txt","w");
	for (i = 1; i<=MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//基数排序
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=0;i<MAXSIZE4;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();radixsort(L,len4);finish=clock();printf("基数排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\4\\sort9.txt","w");
	for (i = 0; i<MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);
	//桶排序
	fp=fopen("d:\\txt\\rand4.txt","r");
	for(i=0;i<MAXSIZE4;i++);
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bucketsort(L,len4);finish=clock();printf("桶排序排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp2=fopen("d:\\txt\\4\\sort10.txt","w");
	for (i = 0; i<MAXSIZE4; i++)
	{
		fprintf(fp2,"%d\n",L.r[i].key);
	}
	fclose(fp2);

	return 0;	
	
}

