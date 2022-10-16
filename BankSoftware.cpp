#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int a=0,i=100;
struct customer
{
	float amount,balance,wamount;
	int acnum;
	char fname[20],mname[20],lname[20],add[70],mnum[10],gen[10];
}c[20];

void account()
{
	int bal=500;
	printf("Your acnum is=%d\n",i);
	c[a].acnum=i;
	printf("Enter your First name:");
	scanf("%s",&c[a].fname);
	printf("Enter your Middle name:");
	scanf("%s",&c[a].mname);
	printf("Enter your Last name:");
	scanf("%s",&c[a].lname);
	printf("Enter your address:");
	scanf("%s",&c[a].add);
	printf("Enter your valid Mobile number:");
	scanf("%d",&c[a].mnum);
	printf("Enter your gender(Male/Femake/Other):");
	scanf("%s",&c[a].gen);
	printf("Your deposit is minimum Rs:%d\n",bal);
	c[a].balance=bal;
	a++;
	i++;
}
void deposit()
{
	int x,m,z;
	float dep;
	printf("****************************\n");
	printf("DEPOSIT\n");
	printf("****************************\n");
	printf("Enter account number:");
	scanf("%d",&x);
	for(m=0;m<i;m++)
	{
		if(c[m].acnum==x)
		{
			z=m;
		}
	}
	if(x==c[z].acnum)
	{
		printf("Your account number is verified");
		printf("\nName: %s %s %s",c[z].fname,c[z].mname,c[z].lname);
		printf("\nEnter the amount you want to deposit:");
		scanf("%f",&dep);
		c[z].balance=c[z].balance+dep;
		printf("Your current balance is:%f",c[z].balance);
	}
	else
	{
		printf("Account number is not verified");
	}
}
void withdraw()
{
	int x,m,z;
	float dep;
	printf("****************************\n");
	printf("WITHDRAW\n");
	printf("****************************\n");
	printf("Enter account number:");
	scanf("%d",&x);
	for(m=0;m<i;m++)
	{
		if(c[m].acnum==x)
		{
			z=m;
		}
	}
	if(x==c[z].acnum)
	{
		printf("Your account number is verified");
		printf("\nName: %s %s %s",c[z].fname,c[z].mname,c[z].lname);
		printf("\nEnter the amount you want to withdraw:");
		scanf("%f",&dep);
		if(dep<c[z].balance)
		{
			c[z].balance=c[z].balance-dep;
			printf("Your current balance is:%f",c[z].balance);
		}
		else
		{
			printf("You don't have sufficient balance");
		}
	}
	else
	{
		printf("Account number is not verified");
	}
}
void enq()
{
	int x,m,z;
	float dep;
	printf("****************************\n");
	printf("BALANCE INQUIRY\n");
	printf("****************************\n");
	printf("Enter account number:");
	scanf("%d",&x);
	for(m=0;m<i;m++)
	{
		if(c[m].acnum==x)
		{
			z=m;
		}
	}
	if(x==c[z].acnum)
	{
		printf("Your account number is verified");
		printf("\nName: %s %s %s",c[z].fname,c[z].mname,c[z].lname);
		printf("\nAddress:%s",c[z].add);
		printf("\nMobile no:%d",c[z].mnum);
		printf("\nGender:%s",c[z].gen);
		printf("\nYour current balance is:%f",c[z].balance);
	}
	else
	{
		printf("Account number is not verified");
	}
}

void main()
{
	int ch;
	while(1)
	{
	//	clrscr();
		printf("****************************\n");
		printf("State Bank Of INDIA\n");
		printf("****************************\n");
		printf("<1> Create an Account\n");
		printf("<2> Deposit\n");
		printf("<3> Withdraw\n");
		printf("<4> Balance Enquiry\n");
		printf("<5> Exit\n");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				account();
				break;
			case 2:
				deposit();
				break;
			case 3:
				withdraw();
				break;
			case 4:
				enq();
				break;
			case 5:
				printf("Thank you");
				exit(0);
			default:
				printf("Enter number between 1 to 5");
		}
		getch();
	}
}
