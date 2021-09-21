#include<stdio.h>
int main()
{
	
int n,a[n],i,j,k,b=0,c0=0,c1=0,c2=0;

printf("enter size of array\n");
scanf("%d",&n);
printf("enter the number for array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
{
    if(a[i]==0)
	{
		c0++;
	}
  else if(a[i]==1)
	{
		c1++;
	}
	else
	{
		c2++;
	}
}
for(i=0;i<c0;i++) 
{
	a[b++]=0;
}
for(j=0;j<c1;j++) 
{
	a[b++]=1;
}
for(k=0;k<c2;k++) 
{
a[b++]=2;
}
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
return 0;
}