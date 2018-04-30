

#include<stdio.h>

void knapsack(int n,float profit[],float weight[],int cp)
{
	 int i;
	 float tp=0,x[20];
     
     for(i=0;i<n;i++)
		{
			if(weight[i]>cp)
			  break;
			else
			 { 
				 x[i]=1.0;
				 tp=tp+profit[i];
				 cp=cp-weight[i];
			  }
		  }
	  if(i<n)
		  x[i]=cp/weight[i];
		  tp=tp+(profit[i]*x[i]);
	  
	  
	  printf("The result fraction is:  ");
	  for(i=0;i<n;i++)
			printf("%f\t", x[i]);
	  printf("\nMaximum profit is : %f",tp);
}
	 	 

int main()
{ 
	float weight[20],profit[20],ratio[20],temp;
	int n,i,j,capacity;
	printf("Enter no of objects:  ");
	scanf("%d",&n);
	printf("Enter capacity of knapsack: ");
	scanf("%d",&capacity);
	printf("Enter profits: ");
	for(i=0;i<n;i++)
	{
		scanf("%f",&profit[i]);
	}
	printf("Enter Weight: ");
	for(i=0;i<n;i++)
	{
		scanf("%f",&weight[i]);
	}
	for(i=0;i<n;i++)
		{
			ratio[i]=profit[i]/weight[i];
		}
    for(i=0;i<n;i++)
    {
		for(j=i+1;j<n;j++)
			{
				if(ratio[i]<ratio[j])
				   {
					   temp=ratio[i];
					   ratio[i]=ratio[j];
					   ratio[j]=temp;
					   
					   temp=profit[i];
					   profit[i]=profit[j];
					   profit[j]=temp;
					   
					   temp=weight[i];
					   weight[i]=weight[j];
					   weight[j]=temp;
					 }
		     }
		}
	  knapsack(n,profit,weight,capacity);
	  return 0;
  }  
					

