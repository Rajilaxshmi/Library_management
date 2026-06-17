#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"header.h"
struct lib *h=0;
struct issue *k=0;
int main()
{
	int op;
	while(1)
	{
		printf("************************************************\n");
		printf("            Book Management Menu                \n");
                printf("************************************************\n");
                printf("| 1.Add New Book                               |\n");
                printf("| 2.Update Book Details                        |\n");
		printf("| 3.Remove Book                                |\n");
		printf("| 4.Search Book                                |\n");
		printf("| 5.View All Book                              |\n");
		printf("| 6.Issue Book                                 |\n");
		printf("| 7.Return Book                                |\n");
		printf("| 8.List Issued Books                          |\n");
		printf("| 9.Save                                       |\n");
		printf("| 10.Exit                                      |\n");
		printf("************************************************\n");
		printf("Enter your Choice:\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			   add();break;
			case 2:
			   update();break;
			case 3:
			   rem();break;
			case 4:
			   search();break;
			case 5:
			   view();break;
			case 6: 
			   issue();break;
			case 7:
			   ret();break;
			case 8:
			   list();break;
			case 9:
			   save();break;
			case 10:
			   ex();break;
			default:
			   printf("Invalid option\n");break;
		}
	}
}

