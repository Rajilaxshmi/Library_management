#include "header.h"
void list()
{
	struct lib *t=h;
	struct issue *p=k;
	char iss[20],due[20],ret[20];
	if(p==NULL)
	{
		printf("No Books issued\n");
		return;
	}
	while(p!=0)
	{
		strftime(iss,sizeof(iss),"%d/%m/%y",localtime(&p->Date));
                strftime(due,sizeof(due),"%d/%m/%y",localtime(&p->DDate));
                strftime(ret,sizeof(ret),"%d/%m/%y",localtime(&p->ReDate));
		printf("**********ISSUED BOOKS**********\n");
		printf("Book ID:%d\n",p->Bid);
		printf("Book Name:%s\n",p->Bname);
		printf("User ID:%d\n",p->Userid);
		printf("User Name:%s\n",p->Uname);
		printf("Date:%s\n",iss);
		printf("Due Date:%s\n",due);
		printf("Return Date:%s\n",ret);
		printf("Late:%d\n",p->late);
	        printf("Fine:%d\n",p->late *10);
		printf("********************************\n");
		p=p->next;
	}
}



