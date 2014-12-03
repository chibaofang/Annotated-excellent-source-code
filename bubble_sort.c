#include<stdio.h>
#define N 15 //no ";" here

void BubbleSort(int array[], int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("\nThe sorted numbers are:");
	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}
	printf("\n\n");
}

int main()
{
	int i,n,a[N];
	do
	{
		printf("Input n[1-12]:");
		scanf("%d", &n);
	}while(!(n>=1&&n<=12));
	
	printf("Please input %d numbers:",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe original numbers are:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
	BubbleSort(a,n);
	return 0;
}
