#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct stuff{
		
		int number;
		char name[10];
		int worktime;
		int money;
	} ;
void calc(struct stuff *);	
	
int main(void) {
	
	struct stuff employee;
	
	calc(&employee);
	

	printf("\n\n");
	printf("�s��:%d\n",employee.number);
	printf("�m�W:%s\n",employee.name);
	printf("�u��:%d\n",employee.worktime);
	printf("���~:%d\n",employee.money);
	printf("���~:%d\n",employee.money*employee.worktime);
	
	system("pause");
	return 0;
}

void calc(struct stuff *p)
{
	printf("�s��:");
	scanf("%d",&p->number);
	printf("�m�W:");
	scanf("%s",p->name);
	printf("�u��:");
	scanf("%d",&p->worktime);
	printf("���~:");
	scanf("%d",&p->money);
	
	
	}	

