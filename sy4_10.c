#include<stdio.h>
int main()
{
	char ch[100];
	int i,j;
	i=j=0;
	scanf("%s",ch);
	for(i=0;i<100;i++)
	{
		if(ch[i]=='a'||ch[i]=='A')
			j++;
	}
	printf("%d",j);
	return 0;
}