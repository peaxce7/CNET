#include<stdio.h>
#include<string.h>

int main()
{
	int i,k,j,n,p;
	char a[20],b[20];
	char c[] = {'D','L','E','S','T','X'};
	char d[] = {'D','L','E','E','T','X'};
	char e[] = {'D','L','E'};
	printf("Enter the size of frames: ");
	scanf("%d",&n);
	printf("Enter the chars: ");
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	i = 0;
	
	while(i<n)
	{	for(i=0;i<n;i++)
		{
			if(a[i-2]=='D' && a[i-1]=='L' && a[i]=='E')
			{
				b[j] = a[i];
				j++;
				for(p=0;p<3;p++)
				{
					b[j] = e[p];
					j++;
				}
			}
			else
			{
				b[j] = a[i];
				j++;
			}
		}
		
	}
printf("After Bit Stuffing :");
for(i=0; i<6; i++)
    printf("%c",c[i]);
printf(" ");
for(i=1;i<=j; i++)
    printf("%c",b[i]);
printf(" ");
for(i=0; i<6; i++)
    printf("%c",d[i]);
}
	
