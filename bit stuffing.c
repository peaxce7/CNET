#include<stdio.h>
#include<string.h>

int main()
{
	int a[20],b[20],i,k,j,n;
	int c[]={0,1,1,1,1,1,1,0};
	printf("Enter the size of frames: ");
	scanf("%d",&n);
	printf("Enter the bits in 1 and 0 form: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i = 0;
	int count = 1;
	j = 0;
	
	while(i<n)
	{
		if(a[i]==1)
		{
			b[j] = a[i];
			for(k=i+1;a[k]==1 && count<5 && k<n;k++)
			{
				j++;
				b[j]=a[k];
				count++;
				if (count == 5)
				{
					j++;
					b[j]=0;
				}
				i=k;
			}
		}
		else
		{
			b[j] = a[i];
		}
		i++;
		j++;
	}
	printf("After Bit Stuffing :");
    for(i=0; i<8; i++)
    	printf("%d",c[i]);
    printf(" ");
	for(i=0; i<j; i++)
    	printf("%d",b[i]);
    printf(" ");
    for(i=0; i<8; i++)
    	printf("%d",c[i]);

}


