#include<stdio.h>
#include<conio.h>
int G[50][50],x[50];  
void next_color(int k)
{
   int i,j;
   x[k]=1;
   for(i=0;i<k;i++)
{ 
     if(G[i][k]!=0 && x[k]==x[i])  
       x[k]=x[i]+1;  
   }
}

void main()
{
  clrscr();
  int n,a,i,j,k,l;
  printf("\n Enter no. of vertices :- ");
  scanf("%d",&n);
  printf("\n Enter no. of edges :- ");
  scanf("%d",&a);

  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      G[i][j]=0;

  printf("\n Enter indexes where value is 1:- \n");
  for(i=0;i<a;i++)
{
    scanf("%d %d",&k,&l);
    G[k][l]=1;
    G[l][k]=1;
  }

  for(i=0;i<n;i++)
    next_color(i);

  printf("\n Colors of vertices :-\n");
  for(i=0;i<n;i++)
    printf("Vertex[%d] : %d\n",i+1,x[i]);

  getch();
}