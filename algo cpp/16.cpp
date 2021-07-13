#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int LCS();
int display(int, int);
int i, j, p, q;
char G[20], H[20], b[20][20], c[20][20];
void main()
{
	clrscr();
        printf("enter the first subsequence\n");
        gets(G);
        printf("enter the second subsequence\n");
        gets(H);
        printf("LCS is : ");
        LCS();
        display(p, q);
}
int LCS()
{
       p = strlen(G);
        q = strlen(H);
        for(i=0;i<=p;i++)
        {
                c[i][0] = 0;
        }
        for(i=0;i<=q;i++)
        {
                 c[0][i] = 0;
        }
        for(i=1;i<=p;i++)
        {
                for(j=1;j<=q;j++)
                {
                        if(G[i-1] == H[j-1])
                        {
                                c[i][j] = c[i-1][j-1] + 1;
 
                                b[i][j] = 'c';
                        }
                        else if(c[i-1][j] >= c[i][j-1])
                        {
                                c[i][j] = c[i-1][j];
                                b[i][j] = 'u';
                        }
                        else
                       {
                                c[i][j] = c[i][j-1];
                                b[i][j] = 'l';
                        }
                }
        }
        return 0;
}
int display(int i, int j)
{
        if(i==0 || j==0)
        {
		return 0;
        }
 
        if(b[i][j] == 'c')
        {
                display(i-1, j-1);
                printf("%c",G[i-1]);
        }
        else if(b[i][j] == 'u')
        {
                display(i-1, j);
        }
        else
        {
                display(i, j-1);
        }
        return 0;
}