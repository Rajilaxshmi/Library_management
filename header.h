#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
struct lib
{
	int id;
	char book[50];
	char au[20];
	int cop;
	struct lib *next;
};
struct issue
{
	int Bid;
	int Userid;
	int late;
	char Bname[50];
	char Uname[20];
	time_t Date;
	time_t DDate;
	time_t ReDate;
	struct issue *next;
};
extern struct lib *h;
extern struct issue *k;
void add(void);
void update(void);
void mod_Bname(void*,int);
void mod_Auname(void*,int);
void mod_Cop(void*,int);
void rem(void);
void rem_id(void);
void rem_name(void);
void search(void);
void view(void);
void issue(void);
void ret(void);
void list(void);
void save(void);
void ex(void);

		
