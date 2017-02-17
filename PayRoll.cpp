#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double hours,payrate,TDA,RegPay,OTPay,GPay,NetPay,FedTax,STax,Dep,TDAamt,tax;
	char fname(10),lname(10);
	int employee,dependents;
	cout<<setprecision(2)<<fixed;
	for(int n=1;n<=7;n++){
		FedTax=23;
		STax=0.08;
		cout<<"Enter the amount of hours for employee "<<n<<".";
		cin>>hours;
		while(hours<0){
			cout<<"YOU HAVE ENTER AN INVAILD AMOUNT-PLEASE TRY AGAIN!"<<endl;
			cout<<endl;
			cout<<"\nEnter the payrate of employee "<<n<<".";
		    cin>>hours;}
		cout<<"Enter the payrate of employee "<<n<<".";
		cin>>payrate;
		while(payrate<=0){
			cout<<"YOU HAVE ENTER AN INVAILD AMOUNT-PLEASE TRY AGAIN!"<<endl;
			cout<<endl;
			cout<<"\nEnter the payrate of employee "<<n<<".";
		    cin>>payrate;}
		cout<<"Enter the amount of dependent(s) for employee "<<n<<".";
		cin>>dependents;
		while(dependents<0 || dependents>5){
			cout<<"YOU HAVE ENTER AN INVAILD AMOUNT-PLEASE TRY AGAIN!"<<endl;
			cout<<endl;
			cout<<"\nEnter the amount of dependent(s) for employee "<<n<<".";
		    cin>>dependents;}
		cout<<"Enter the TDA in percent for employee "<<n<<". (16% max)";
		cin>>TDA;
		while(TDA<0 || TDA>16){
			cout<<"YOU HAVE ENTER AN INVAILD AMOUNT-PLEASE TRY AGAIN!"<<endl;
			cout<<endl;
			cout<<"\nEnter the TDA in percent for employee "<<n<<".";
		    cin>>TDA;}
		if(hours<=40)GPay=hours*payrate;
		else GPay=(hours-40)*(1.5*payrate)+(40*payrate);
		Dep=dependents*1.5;
        FedTax=(FedTax-Dep)/100;
		TDAamt=GPay*(TDA/100);
		tax=GPay*(STax+FedTax);
		NetPay=GPay-tax-TDAamt;
		cout<<"Employee\tHours\tPayRate\tDependents\tTDA\tNetPay\tTax\tGrossPay\tTDA Amount"<<endl;
		cout<<"Emp \t"<<n<<"\t"<<hours<<"\t$"<<payrate<<"/hour\t"<<dependents<<"\t"<<TDA<<"%"<<"\t$"<<NetPay<<"\t$"<<tax<<"\t$"<<GPay<<"  \t$"<<TDAamt<<endl;
		cout<<endl;}
	}
