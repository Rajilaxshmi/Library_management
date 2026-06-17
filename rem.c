#include "header.h"
void rem()
{
	char op;
	printf("********************************\n");
	printf("           Rem Menu             \n");
	printf("********************************\n");
	printf("A.By Book ID\n");
	printf("B.By Book Name\n");
	printf("C.Back to Main\n");
	printf("********************************\n");
	printf("Enter a choice:\n");
	scanf(" %c",&op);
	if(op=='A')
	  rem_id();
	else if(op=='B')
	  rem_name();
	else if(op=='C')
	 return;
        else 
	  printf("Invalid choice\n");
}
void rem_id()
{
   struct lib *t=h;
   struct lib *prev;
   int id; char ch;
   printf("Enter a Book ID\n");
   scanf("%d",&id);
   while(t!=0)
   {
	   if(t->id==id)
	   {
		   if(t==h)
		    h=t->next;
		   else 
		    prev->next=t->next;
        	   printf("***********************************************************************\n");
                   printf("| %-10s | %-30s | %-20s | %-8s |\n","BOOK ID", "BOOK TITLE", "AUTHOR NAME", "COPIES");
                   printf("***********************************************************************\n");
                   printf(" |%-10d | %-30s | %-20s | %-8d |\n",t->id,t->book,t->au,t->cop);
                   printf("***********************************************************************\n");
                   printf("Are you sure?(y/n):");
		   scanf(" %c",&ch);
		   if(ch=='y')
		     free(t);
		   return;
	   }
	   else
           {
		  prev=t;
		  t=t->next;
	   }
   }
}

void rem_name()
{
	char s[20],ch;
	struct lib *t=h;
	struct lib *prev;
	printf("Enter Book Name:\n");
	scanf(" %[^\n]",s);
	while(t!=0)
        {
           if((strcmp(t->book,s))==0)
           {
                   if(t==h)
                    h=t->next;
                   else
                    prev->next=t->next;
                   printf("***********************************************************************\n");
                   printf("| %-10s | %-30s | %-20s | %-8s |\n","BOOK ID", "BOOK TITLE", "AUTHOR NAME", "COPIES");
                   printf("***********************************************************************\n");
                   printf(" |%-10d | %-30s | %-20s | %-8d |\n",t->id,t->book,t->au,t->cop);
                   printf("***********************************************************************\n");
                   printf("Are you sure?(y/n):");
                   scanf(" %c",&ch);
                   if(ch=='y')
                     free(t);
                   return;
           }
           else
           {
                  prev=t;
                  t=t->next;
           }
   }
}
