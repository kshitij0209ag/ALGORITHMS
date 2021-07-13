#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
  int n,array[100],i,j,k,temp=0;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i=0;i<n;i++)
    scanf("%d", &array[i]);
  for (i=1;i<=n-1;i++) 
  {
    k = array[i];
    for (j=i-1;j>=0;j--) 
    {
      if (array[j]>k) 
      {
        array[j+1]=array[j];
        temp=1;
      }
      else
        break;
    }
    if (temp)
      array[j+1] = k;
  }
  printf("Sorted list is:\n");
  for (i=0;i<=n-1;i++) 
  {
    printf("%d\n", array[i]);
  }
  getch();
}