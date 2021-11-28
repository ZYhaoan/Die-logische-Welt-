#include<stdio.h>
int main()
{
	int N,M,i,j,a[100][100],num[100]={0},sum[100]={0};
	double ave[100];
	scanf("%d %d",&N,&M);
	for(i=0;i<N;i++)
	{   scanf("%d",&num[i]);
	    for(j=0;j<M;j++)
		{
			scanf("%d",&a[i][j]);
            sum[i]+=a[i][j];
		}
		ave[i]=(double)sum[i]/M;
		
	}
	for(i=0;i<N;i++)
	printf("num=%d sum=%d ave=%.2lf\n",num[i],sum[i],ave[i]);

	return 0;
}
/*
#include <stdio.h>
#define N 2
#define M 3
int main()
{
int a[N][M],sum[N]={0};
double avg[N];
int i,j;
for(i=0;i<N;i++)
{
printf("Input the %dth student's scores:",i+1);
for(j=0;j<M;j++)
{
scanf("%d",&a[i][j]);
sum[i]+=a[i][j];
}
avg[i]=(double)sum[i]/M;
}
printf("The sums are:");
for(i=0;i<N;i++)
printf("%4d",sum[i]);
printf("\nThe averages are:");
for(i=0;i<N;i++)
printf("%6.2lf",avg[i]);
printf("\n");
}*/