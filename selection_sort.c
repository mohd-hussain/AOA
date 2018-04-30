
#include<stdio.h>
void main()
{
    int a[10],no,i,j,temp,min;
    
    printf("Enter the size of An Array:\n");
    scanf("%d",&no);
    
    printf("Enter the Elements of An Array:\n");
    
    for(i=0;i<no;i++)
        scanf("%d",&a[i]);
        
	for(i=0;i<no;i++)
		{
				min=i;
				for(j=i+1;j<no;j++)
					{
							if(a[min]>a[j])
								min=j;
					}
				temp = a[i];
				a[i] = a[min];
				a[min] = temp;
		}
	printf("Sorted Array:\n");
        for(i=0;i<no;i++)
            printf("%d\n",a[i]);
}		





