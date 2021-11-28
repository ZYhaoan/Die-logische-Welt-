#include<stdio.h>

int main(void)

{  int i,a,n=1;

    while(n<=7)

    {
		scanf("%d",&a);

        if(a>=1&&a<=50)

        { 

         for(i=0;i<a;i++)

             printf("*");

         printf("\n");

         n++;
		
		}

      }

   return 0;

}