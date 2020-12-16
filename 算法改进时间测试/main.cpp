#include"head.h"
int main()
{
	int MAXSIZE=0;//待排序数字的数量
	SqList L;//存放数据的结构体数组(顺序表)
	clock_t start,finish;//time.h中计时变量

	double duration;//排序时间变量
	int dlta[5]={9,7,5,3,1};//shell sort中所用到的间隔
	int i,temp;
	FILE *fp=fopen("D:\\txt\\rand1.txt","w");//为输出打开一个文本文件
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
	start=clock();bubblesort1(L);finish=clock();printf("冒泡排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp=fopen("D:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE2;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();bubblesort2(L);finish=clock();printf("冒泡排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));


    //快速排序
	fp=fopen("D:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();quicksort1(L,1,L.length);finish=clock();printf("快速排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	fp=fopen("D:\\txt\\rand1.txt","r");
	for(i=1;i<=MAXSIZE4;i++)
	{
		fscanf(fp,"%d\n",&L.r[i].key);
	}
	fclose(fp);
	start=clock();quicksort2(L,8);finish=clock();printf("快速排序所需时间为:%f。\n",duration=((double)(finish-start)/CLOCKS_PER_SEC));
	return 0;
}