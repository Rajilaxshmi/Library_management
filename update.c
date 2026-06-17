#include "header.h"
void update()
{
	struct lib *t=h;
	int op,n=0;
	char ch;
	printf("**************************\n");
	printf("1.By Book ID\n");
	printf("2.By Book Name\n");
	printf("3.Back to Main Menu\n");	       
       	printf("**************************\n");
	printf("Enter your Choice:\n");
	scanf("%d",&op);
	if(op==1)
	{
		printf("Enter Book ID\n");
		scanf("%d",&n);
		while(t!=0)
		{
		  if(t->id==n)
		  {
			  printf("***********************************************************************\n");
			  printf("| %-10s | %-30s | %-20s | %-8s |\n","BOOK ID", "BOOK TITLE", "AUTHOR NAME", "COPIES");
			  printf("***********************************************************************\n");
                          printf(" |%-10d | %-30s | %-20s | %-8d |\n",t->id,t->book,t->au,t->cop);
		          printf("***********************************************************************\n");
  
		  }
		  t=t->next;
		}
	printf("****Update Menu****\n");
	printf("*******************\n");
	printf("A.Book Name\n");
	printf("B.Author Name\n");
	printf("C.Copies\n");
        printf("*******************\n");
	printf("Enter your Choice:\n");
	scanf(" %c",&ch);
	if(ch=='A')
		mod_Bname(&n,1);
	else if(ch=='B')
		mod_Auname(&n,1);
	else if(ch=='C')
		mod_Cop(&n,1);
	}
	else  if(op==2)
        {
		struct lib *prev;
		char s[20],ch;
                printf("Enter Book Name:");
                scanf(" %s",s);
                while(t!=0)
                {
                  if((strcmp(t->book,s))==0)
                  {
                          printf("***********************************************************************\n");
                          printf("| %-10s | %-30s | %-20s | %-8s |\n","BOOK ID", "BOOK TITLE", "AUTHOR NAME", "COPIES");
                          printf("***********************************************************************\n");
                          printf(" |%-10d | %-30s | %-20s | %-8d |\n",t->id,t->book,t->au,t->cop);
                          printf("***********************************************************************\n");

                  }
                  t=t->next;
                }
        printf("****Update Menu****\n");
        printf("*******************\n");
        printf("A.Book Name\n");
        printf("B.Author Name\n");
        printf("C.Copies\n");
        printf("*******************\n");
        printf("Enter your Choice:\n");
        scanf(" %c",&ch);
        if(ch=='A')
                mod_Bname(s,2);
        else if(ch=='B')
                mod_Auname(s,2);
        else if(ch=='C')
                mod_Cop(s,2);
        }
	else if(op==3)
		return;
	else
		printf("Invalid option\n");
}
void mod_Bname(void *s,int t)
{
	struct lib *ptr=h;
	char name[20];
	if(t==1)
	{
		while(ptr!=0)
		{
			if(ptr->id==*(int*)s)
			{
				printf("Enter your new Book name:");
				scanf("%s",name);
				strcpy(ptr->book,name);
			}
			ptr=ptr->next;
		}
	}
	if(t==2)
        {
                while(ptr!=0)
                {
                        if(strcmp(ptr->book,(char*)s)==0)
                        {
                                printf("Enter your new Book name:");
                                scanf("%s",name);
                                strcpy(ptr->book,name);
                        }
                        ptr=ptr->next;
                }
        }
}
void mod_Auname(void *s,int t)
{
        struct lib *ptr=h;
        char Auname[20];
        if(t==1)
        {
                while(ptr!=0)
                {
                        if(ptr->id==*(int*)s)
                        {
                                printf("Enter your new Author name:");
                                scanf("%s",Auname);
                                strcpy(ptr->au,Auname);
                        }
                        ptr=ptr->next;
                }
        }
        if(t==2)
        {
                while(ptr!=0)
                {
                        if(strcmp(ptr->book,(char*)s)==0)
                        {
                                printf("Enter your new Author name:");
                                scanf("%s",Auname);
                                strcpy(ptr->au,Auname);
                        }
                        ptr=ptr->next;
		}
	}
}
void mod_Cop(void *s,int t)
{
        struct lib *ptr=h;
        int n;
        if(t==1)
        {
                while(ptr!=0)
                {
                        if(ptr->id==*(int*)s)
                        {
                                printf("Enter updated copies:\n");
                                scanf("%d",&n);
				ptr->cop=n;
                        }
                        ptr=ptr->next;
                }
        }
        if(t==2)
        {
                while(ptr!=0)
                {
                        if(strcmp(ptr->book,(char*)s)==0)
                        {
                                printf("Enter updated copies:\n");
                                scanf("%d",&n);
                                ptr->cop=n;
                        }
                        ptr=ptr->next;
		}
	}
}

