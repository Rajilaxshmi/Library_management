#include "header.h"
void ex()
{
        char ch;
        printf("**************************************************\n");
        printf("S/s : Save and Exit\n");
        printf("E/e :Exit without saving\n");
        printf("**************************************************\n");
        printf("Enter your choice:");
        scanf(" %c",&ch);
        if(ch=='S' || ch=='s')
          save();
        else if(ch=='E' || ch=='e')
	{
	       	printf("Exiting the Student Database\n");
		exit(0);
	}

}

