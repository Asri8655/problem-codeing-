//Question link
//https://www.instagram.com/p/B_eGN7-A0k-/?utm_source=ig_web_copy_link
#include<stdio.h>
int main()
{
    int a,i,tot=0,result;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        tot=tot+arr[i];
    }
    if(tot%3==0)
    {
        result=tot/3;
    }
    else
    {
     result=(tot/3)+1;   
    }
    printf("%d",result);
}
