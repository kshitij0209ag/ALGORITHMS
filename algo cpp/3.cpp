#include <stdio.h>
#include <conio.h>
void main()
{
    clrscr();
  int array[100], n, i, j, p, t;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i=0;i<n;i++)
    scanf("%d", &array[i]);
  for (i=0;i<(n-1);i++)
  {
      p=i;
    for (j=i+1;j<n;j++)
    {
      if (array[p]>array[j])
      p=j;
    }
    if (p!=i)
      {
        t       = array[i];
        array[i]   = array[p];
        array[p] = t;
      }
  }
  printf("Sorted list in ascending order:\n");
  for (i=0;i<n;i++)
     printf("%d\n", array[i]);
  getch();
}