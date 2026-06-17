#include"header.h"
void save()
{
	FILE *f,*f2;
        if(h==0)
        {
                printf("There is no Data for books\n");
                return;
        }
	else
	{
         f=fopen("ALLBOOKS.dat","w");
        if(f==NULL)
        {
                printf("file is not createed\n");
                return;
        }
	else
	{
          struct lib *ptr=h;
          while(ptr!=0)
          {
                fprintf(f,"%d %s %s %d\n",ptr->id,ptr->book,ptr->au,ptr->cop);
                ptr=ptr->next;
           }
	  fclose(f);
	  printf("Books data saved successfully..\n");
	}
	}
	if(k==0)
	{
		printf("There is no Data for issued books\n");
		return;
	}
	else
	{
	f2=fopen("ISSUEDBOOKS.dat","w");
	if(f2==NULL)
	{
		printf("file is not created\n");
		return;
	}
	else
	{
	struct issue *t=k;
	while(t!=0)
	{
		fprintf(f2,"%d %d %s %ld %ld\n",t->Bid,t->Userid,t->Uname,(long)t->Date,(long)t->DDate);
		t=t->next;
	}
       	  fclose(f2);
          printf("Issued Books data saved successfully..\n");
        }
        }

}


