//Question link
//https://www.instagram.com/p/CAIR4lkgsxq/?utm_source=ig_web_copy_link
#include<stdio.h>
int main ()
{
  int a, i, j, t;
  scanf ("%d", &a);
  int arr[a], r[a];
  for (i = 0; i < a; i++)
    {
      scanf ("%d", &arr[i]);
    }
  for (i = 0; i < a; i++)
    {
      for (j = i + 1; j < a; j++)
	{
	  if (arr[i] > arr[j])
	    {
	      t = arr[i];
	      arr[i] = arr[j];
	      arr[j] = t;
	    }
	}
    }
  for (i = 1; i <= a; i++)
    {
      if (i == arr[i])
	{
	  r[i] = arr[i];

	}
      else
	{
	  r[i] = -1;
	}
    }
  for (i = 0; i < a; i++)
    {
      printf ("%d ", r[i]);
      //printf("%d ",arr[i]);
    }
}
