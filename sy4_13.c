#include<stdio.h>
int main()
{
	int n1,n2;
	for(n1=1;n1<=98;n1++)
		for(n2=1;n2<=96;n2++)
			if(n1+n2==98 && 2*n1+4*n2==386)
				printf("chicken=%d,rabbit=%d",n1,n2);
	return 0;

}