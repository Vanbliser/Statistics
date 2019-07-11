#include <stdio.h>
rand();sort(int [], int);
main()
{	/*----------------------------------------*/
	int arr[100]={};int sum=0;int i;
	printf("\t\t\tgenerated numbers\n");
	for(i=0;i<=99;++i)
	{	arr[i]= rand()%10;sum += arr[i];
		while(sum > 100)
		{	sum -= arr[i];arr[i]=rand()%10;
			sum+=arr[i];
		}
		if(sum == 100)break;
	}
	for(int j=0;j<=i;++j)
	{	printf("\t%d\t",arr[j]);	}
	printf("\n");
	/*----------------------------------------*/
	sort(arr,i);
	printf("\t\t\tsorted numbers\n");
	for(int j=0;j<=i;++j)
 	{printf("\t%d\t",arr[j]);} printf("\n");
	/*----------------------------------------*/	
	int m=i/2;int n=i%2;int aw[10]={};int v=0;
	int av[]={0,1,2,3,4,5,6,7,8,9};
 	float mean= sum/(i+1.00);int d=m+1;
 	float median= (arr[m] + arr[d])/2.00;
 	printf("\n\tMean = %.2f",mean);
	printf("\t\t\tRange = %d",arr[i]-arr[0]);
	if(n==0)
	printf("\n\tMedian = %d",arr[m]); 
	else 
	{	printf("\n\tMedian = ");
 		printf("%.2f",median);
 	}
	for(int j=0;j<=i;++j)
 	{	for(int k=0;k<=9;++k)
 		{if(arr[j]==k){ aw[k]+=1;break;}
 		}
 	}
 	for(int i=0;i<=9;++i)
 	{	if(v < aw[i]) v = aw[i];
 	}
 	printf("\t\tMode = ");
 	for(int i=0;i<=9;++i)
 	{	if(aw[i]==v) printf("%d; ",av[i]); }
 	printf("\n\tSum = %d\n\n\n",sum);
	/*----------------------------------------*/
}

sort(int arr[],int i)
{	up:for(int j=0;j<=i-1;++j)
	{	int k= j+1;if(arr[j] > arr[k])
		{	int a = arr[j];arr[j]=arr[k];
			arr[k]=a;goto up;
		}
	}
}
