#include "header.h"
void search()
{
	struct lib *t=h;
	int ID;
	char B[20],A[20],ch;
	printf("****************************\n");
	printf("         Search Book        \n");
	printf("****************************\n");
	printf("A.By Book ID\n");
	printf("B.BY Book Name\n");
	printf("C.By Author Name\n");
	printf("D.Back to Main\n");
	printf("****************************\n");
	printf("Enter your choice:\n");
	scanf(" %c",&ch);
	if(ch=='A')
	{
		printf("Enter Book ID:\n");
		scanf("%d",&ID);
	}
	else if(ch=='B')
	{
		printf("Enter Book Name:\n");
		scanf(" %[^\n]",B);
	}
	else if(ch=='C')
	{
		printf("Enter Author Name:\n");
		scanf(" %[^\n]",A);
	}
	else if(ch=='D')
	  return;
	else
	  printf("Invalid option\n");
	while(t!=0)
	{
		if(t->id==ID)
		{
               		  printf("***********************************************************************\n");
                          printf("| %-10s | %-30s | %-20s | %-8s |\n","BOOK ID", "BOOK TITLE", "AUTHOR NAME", "COPIES");
                          printf("***********************************************************************\n");
                          printf(" |%-10d | %-30s | %-20s | %-8d |\n",t->id,t->book,t->au,t->cop);
                          printf("***********************************************************************\n");
                          return;
		}
		else if(strcmp(t->book,B)==0)
		{
		    	  printf("***********************************************************************\n");
                          printf("| %-10s | %-30s | %-20s | %-8s |\n","BOOK ID", "BOOK TITLE", "AUTHOR NAME", "COPIES");
                          printf("***********************************************************************\n");
                          printf(" |%-10d | %-30s | %-20s | %-8d |\n",t->id,t->book,t->au,t->cop);
                          printf("***********************************************************************\n");
                          return;
		}
		else if(strcmp(t->au,A)==0)
		{
    			  printf("***********************************************************************\n");
                          printf("| %-10s | %-30s | %-20s | %-8s |\n","BOOK ID", "BOOK TITLE", "AUTHOR NAME", "COPIES");
                          printf("***********************************************************************\n");
                          printf(" |%-10d | %-30s | %-20s | %-8d |\n",t->id,t->book,t->au,t->cop);
                          printf("***********************************************************************\n");
                          return;
		}
		t=t->next;
	}
}


                

