#include<stdio.h>
#include<limits.h>
int main(int argc, char *a[])
{
	int t,n,x=0,j=0;
	int g[n],g1[n],g2[1];
	scanf("%d \n %d",&t,&n);
	for(int i=0;i<n;i++)
	{
	scanf("%d",&g[i]);
	}
	for(int i=0;i<n;i++)
	{
	scanf("\n%d",&g1[i]);
	}
	for(int i=1;i<n;i++)
	   {
	    if(g[0]<g[i])
		g2[0]=g[i];
		if(g2[0]>g1[j]&& g1[j]!=0)
		   x++;
		   j++;
       }
		/*for(int i=0;i<n;i++)
		 if(g[0]>g1[i]&& g1[i]!=0)
		   x++;*/
		   printf("%d",x);

}
