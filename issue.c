#include "header.h"
void issue(void)
{
	struct lib *t=h;
	struct issue *p=malloc(sizeof(struct issue));
	int ID;
	char B[50],U[20],iss[20],due[20];
	printf("Enter User Name:");
	scanf(" %[^\n]",U);
	printf("Enter Book Name:");
	scanf(" %[^\n]",B);
	printf("Enter User ID:");
        scanf(" %d",&ID);
	while(t!=0)
	{
		if(strcmp(t->book,B)==0)
		{
			if(t->cop>0)
			{
                                p->Bid=t->id;
				strcpy(p->Bname,B);
				p->Userid=ID;
				strcpy(p->Uname,U);
				p->Date=time(NULL);
				p->DDate=p->Date+(7*24*60*60);
			        p->next=0;
				if(k==0)
				{
					k=p;
				}
				else
				{
					struct issue *l=k;
					while(l->next!=0)
						l=l->next;
					l->next=p;
				}
				t->cop-=1;
				strftime(iss,sizeof(iss),"%d/%m/%y",localtime(&p->Date));
				strftime(due,sizeof(due),"%d/%m/%y",localtime(&p->DDate));
                                printf("Book ID:%d\n",p->Bid);
				printf("Book Name:%s\n",p->Bname);
				printf("User ID:%d\n",p->Userid);
				printf("User Name:%s\n",p->Uname);
				printf("Date:%s\n",iss);
				printf("Due Date:%s\n",due);
				printf("Issued record is inserted BOOK ID=%d User ID=%d\n",p->Bid,p->Userid);
				break;
			}
			else
			 printf("No Copies are available\n");
		}
		t=t->next;
	}
}
