#include "header.h"
void add()
{
	char c;
	do
	{
		static int n=1;
		struct lib *t;
		t=(struct lib*)malloc(sizeof(struct lib));
		printf("Enter Book Details:\n");
		printf("Enter Title:");
		scanf(" %[^\n]",t->book);
		printf("Enter Author Name:");
		scanf(" %[^\n]",t->au);
		printf("Enter Number of Copies:");
		scanf("%d",&t->cop);
		t->id=n++;
		if(h==0)
		{
			t->next=0;
			h=t;
		}
		else
		{
			struct lib *l=h;
			while(l->next!=0)
			 l=l->next;
		        t->next=0;
			l->next=t;
		}
		printf("Add next Book?(y/n):\n");
		scanf(" %c",&c);
	}while(c=='y');
}

