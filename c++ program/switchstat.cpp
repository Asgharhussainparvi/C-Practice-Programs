#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"enter the first number:" ;
	cin>>a;
	cout<<"enter the second number:" ;
	cin>>b;
	cout<<"enter the operator:" ;
	cin>>op;
	switch(op)
	{
	 case '+':
	 	cout<<"the sum is:"<<a+b<<endl;
	 	break;
	 case '-':
	 	cout<<"the subtraction is :"<<a-b<<endl;
	 	break;
	 case '/':
	 	cout<<"the division is:"<<a/b<<endl;
	 	break;
	default:
		cout<<"invalid given operator"<<endl;
    }
    getche();
    
}
