#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<malloc.h>
#define MAXSIZE1 10000
#define MAXSIZE2 50000
#define MAXSIZE3 100000
#define MAXSIZE4 200000
typedef int KeyType;
typedef struct 
{
	KeyType key;//关键字项
}RedType;
typedef struct 
{
	RedType r[200010];//r[0]闲置或用作哨兵单元
	int length;
}SqList;



typedef SqList HeapType;


void InsertSort(SqList &L);//direct insertion sort

void BInsertSort(SqList &L);//binary insertion sort

void ShellInsert(SqList &L,int dk);//Shell sort
void ShellSort(SqList &L,int dlta[],int t);

void bubblesort(SqList &L);//bubble sort

void SelectSort(SqList &L);//simple selection sort

/*int Partition(SqList &L,int low,int high);//quicksort
void quicksort(SqList &L,int low,int high);*/
int Partition(SqList &L,int low,int high);
void qsort_improve(SqList &L,int low,int high,int k);
void quicksort(SqList &L,int k);

void HeapAdjust(HeapType &H,int s,int m);//heapsort
void HeapSort(HeapType &H);



void Merge( RedType SR[],RedType TR[],int left,int mid,int right);
void MSort(RedType SR[],int s,int t);
void MergeSort(SqList &L);





//void countsort(SqList &L,int n);//计数排序
void radixsort(SqList &L,int n);//基数排序
void bucketsort(SqList &L,int n);//桶排序
