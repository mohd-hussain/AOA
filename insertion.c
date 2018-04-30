


#include<stdio.h>
void main()
{
    int a[10],no,i,j,key;
    
    printf("Enter the size of An Array:\n");
    scanf("%d",&no);
    
    printf("Enter the Elements of An Array:\n");
    
    for(i=0;i<no;i++)
        scanf("%d",&a[i]);

    for(i=1;i<no;i++)
        {
            key=a[i];
            j=i-1;

            while(key<a[j] && j>=0)
                {
                    a[j+1] = a[j];
                    j--;
                }
            a[j+1]=key;
        }
    printf("Sorted Array:\n");
        for(i=0;i<no;i++)
            printf("%d\n",a[i]);
}

