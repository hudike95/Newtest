#include <stdio.h>
int main()
{
	int i,j,t,a[5];
	 printf("����5������\n");
	for(i=0,i<4,i++)
	{
		for(j=0,j<4-i,j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	 printf("������˳���ǣ�\n");
	for(i=0;i<5;i++)
	{
		printf("%5d", a[i]); 
	}
}
