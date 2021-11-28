#include<stdio.h>
int main()
{
	int n1,n2,n3,i=0;
    for(n1=1;n1<=12;n1++)
	{
		for(n2=1;n2<=75;n2++)
			for(n3=1;n3<=150;n3++)
			{
				if(5*n1+2*n2+1*n3==150 && n1+n2+n3==100)
				{
					printf("five=%d,two=%d,one=%d\n",n1,n2,n3);
				    i++;
				}
			}
	}
    printf("count=%d",i);
	return 0;

}