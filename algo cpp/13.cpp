#include <stdio.h>
#include <conio.h>
void shellsort(int arr[], int num)
{
    int i, j, k, tmp;
    for (i = num / 2; i > 0; i = i / 2)
    {
        for (j = i; j < num; j++)
        {
            for(k = j - i; k >= 0; k = k - i)
            {
                if (arr[k+i] >= arr[k])
                    break;
                else
                {
                    tmp = arr[k];
                    arr[k] = arr[k+i];
                    arr[k+i] = tmp;
                }
            }
        }
    }
}
void main()
{
    clrscr();
    int arr[50];
    int n,  num;
    printf(" \n Enter total no. of elements \n :-  ");
    scanf("%d", &num);
    printf(" \n Enter %d numbers \n :- \n ", num);

    for (n =  0 ; n < num; n++)
    {
	scanf("%d", &arr[n]);
    }
    shellsort(arr, num);
    printf(" \n Sorted array is \n :- \n ");
    for (n = 0; n < num; n++)
        printf("%d ", arr[n]);
    getch();
}