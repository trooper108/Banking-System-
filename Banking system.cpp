//VISHAL PAL 15/06/2020
//Banking System

#include<stdio.h>
#include<conio.h>
int list();
void deposit();
void withdraw();
void transfer();
void checkdetails();
void last();

int TotalAmount=1000,Amount,Amo,Tr,TotalDeposit=0,TotalWith=0,TotalTrans=0,Acc;
char a[50];
int main()
{
	printf("\nEnter your name ");
	gets(a);
	printf("\nEnter your Account Number");
	scanf("%d",&Acc);
	while(1){                     //loop start
	    clrscr();
		switch(list()){            //Switch case start
			case 1:
				deposit();
				TotalDeposit+=Amount;
				break;
			case 2:
				withdraw();
				if(Amo<=TotalAmount){
					TotalWith+=Amo;
				}
				break;
			case 3:
				transfer();
				if(Tr<=TotalAmount){
					TotalTrans+=Tr;
				}
				break;
			case 4:
				checkdetails();
				break;
			case 5:
				clrscr();
				last();
				getch();
				exit(0);
				break;
			default:
			    printf("\nInvalid Choice");	
		}// End Of Switch Case....
		getch();
	}// End Of While Loop...
}
int list()
{
	int ch;
	printf("\n1.Deposit:");
	printf("\n2.Withdraw:");
	printf("\n3.Transfer:");
	printf("\n4.Checkdetails:");
	printf("\n5.Exit:");
	printf("\nEnter Your choice: ");
	scanf("%d",&ch);
	return(ch);
}
void deposit()
{
	printf("\nEnter the amount you want to deposit: ");
	scanf("%d",&Amount);
	TotalAmount+=Amount;
}
void withdraw()
{
	printf("\nEnter the amount you wish to withdraw:");
	scanf("%d",&Amo);
	if(Amo<=TotalAmount){
		TotalAmount-=Amo;
	}else{
		printf("\nLess Amount Withdraw is not possible");
	}
}
void transfer()
{
	printf("\nEnter the amount you want to transfer");
	scanf("%d",&Tr);
	if(Tr<=TotalAmount){
		TotalAmount-=Tr;
	}else{
		printf("\n Less amount Transfet is not Possible");
	}
}
void checkdetails()
{
	printf("\nTotal Amount: %d",TotalAmount);
	printf("\nTotal Deposit: %d",TotalDeposit);
	printf("\nTotal Withdraw: %d",TotalWith);
	printf("\nTotal Transfer: %d",TotalTrans);
}
void last()
{
	printf("****************************************");
	printf("\nYour Name %s",a);
	printf("\nAccount Number %d",Acc);
	printf("\nTotal Amount: %d",TotalAmount);
	printf("\nTotal Deposit: %d",TotalDeposit);
	printf("\nTotal Withdraw: %d",TotalWith);
	printf("\nTotal Transfer: %d",TotalTrans);
	printf("\n***************  THANKS  ***************");
}


