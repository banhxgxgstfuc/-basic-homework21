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
	printf("編號:%d\n",employee.number);
	printf("姓名:%s\n",employee.name);
	printf("工時:%d\n",employee.worktime);
	printf("時薪:%d\n",employee.money);
	printf("月薪:%d\n",employee.money*employee.worktime);
	
	system("pause");
	return 0;
}

void calc(struct stuff *p)
{
	printf("編號:");
	scanf("%d",&p->number);
	printf("姓名:");
	scanf("%s",p->name);
	printf("工時:");
	scanf("%d",&p->worktime);
	printf("時薪:");
	scanf("%d",&p->money);
	
	
	}	

