#include<stdio.h>
#include<conio.h>
void TOH(int, char, char, char);
int main ()
{
clrscr();
int n;
printf("Enter number of disks required: \n");
scanf ("%d",  &n);
TOH (n, 'A', 'B', 'C');
getch();
return 0;
}
void TOH (int n, char src, char spare, char dest)
{
if (n==1)
printf("Move from %c to %c \n", src, dest);

else
{
TOH(n-1, src, dest, spare) ;
TOH(1, src, spare, dest);
TOH(n-1, spare, src, dest);
}
}