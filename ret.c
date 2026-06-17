#include"header.h"
#include<time.h>
void ret()
{
	struct lib *t=h;
	struct issue *p=k;
	int BID,UID;
	printf("Enter Book ID:\n");
	scanf(" %d",&BID);
	printf("Enter User ID:\n");
	scanf(" %d",&UID);
	printf("Inserted Book ID=%d\n",p->Bid);
	while(p!=0)
	{
		if(p->Bid==BID && p->Userid==UID)
		{
			printf("returned\n");
			break;
		}
		p=p->next;
	}
	if(p==NULL)
	{
		printf("Issued record is not found\n");
		return;
	}
	while(t!=0)
	{
		if(t->id==BID)
		{
			t->cop+=1;
			break;
		}
		t=t->next;
	}
	p->ReDate=time(NULL);
        p->late=(int)(difftime(p->ReDate,p->DDate)/(24*60*60));
	if(p->late<0)
		p->late=0;
	printf("Late:%d\n",p->late);
	if(p->late>0)
		printf("Fine:%d\n",p->late*10);
	else
		printf("No Fine\n");
}

