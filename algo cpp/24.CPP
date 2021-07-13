#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int t[5] = {-1};
int sol = 1;
 void printsol()
{
int i,j;
char crossboard[5][5];
 for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
crossboard[i][j]='_';
}
}
for(i=0;i<5;i++)
{
crossboard[i][t[i]]='q';
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
printf("%c ",crossboard[i][j]);
}
printf("\n");
}
}
int empty(int i)
{
int j=0;
while((t[i]!=t[j])&&(abs(t[i]-t[j])!=(i-j))&&j<5)j++;
 return i==j?1:0;
}
void queens(int i)
{
for(t[i] = 0;t[i]<5;t[i]++)
{
if(empty(i))
{
if(i==4)
{
 printsol();
printf("\n solution %d\n",sol++);
}
else queens(i+1);
}
}
}
int main()
{
clrscr();
queens(0);
printf("\n Total Number of Solutions is %d",sol);
 return 0;
}