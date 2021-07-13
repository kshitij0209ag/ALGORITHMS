#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct node{

	int info;

	struct node *lp;

	struct node *rp;

};


void inorder(int arr[], struct node* root)

{

if(root!=NULL)

{

static int i = 0;

inorder(arr,root->lp);

arr[i++]=root->info;

inorder(arr,root->rp);

}

}


void main()

{
clrscr();

int arr[10],n;

printf("Enter the size of array:- \n");

scanf("%d",&n);

printf("\nEnter %d array elements:- \n",n);

for(int i = 0; i<n; i++)

scanf("%d",&arr[i]);


struct node *head = (struct node *)malloc(sizeof(struct node));

struct node *ptr = (struct node *)malloc(sizeof(struct node));

ptr->info = arr[0];

ptr->lp = NULL;

ptr->rp = NULL;

head = ptr;

for(i = 1; i<n; i++)

{

	ptr = head;

	struct node *next = (struct node *)malloc(sizeof(struct node));

	next->info = arr[i];

	next->lp = NULL;

	next->rp = NULL;

	int flag;

	do
{

		flag = 0;

		if((next->info)<(ptr->info))

		{

			if(ptr->lp==NULL)

			{

			ptr->lp = next;

			flag = 1;

			}

			else
{

			ptr = ptr->lp;

			}

		}

		else

		{

			if(ptr->rp==NULL)

			{

			ptr->rp = next;

			flag = 1;

			}

			else
{

			ptr = ptr->rp;

			}

		}

	}
while(flag==0);

}

inorder(arr,head);

printf("\n******************\n");

printf("\nSorted array:\n");

for(i = 0; i<n; i++)
printf("%d ",arr[i]);
getch();
}