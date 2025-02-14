#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b, c;
	cout<<"enter the numbers"<<endl;
	cin>>a>>b>>c;
	if(a<b)
		if(a<c)
		 cout<<" a is smallest";
		else
		cout<<" c is smallest";
	   else if(b<c)
			cout<<" b is smallest";
			else 
			  cout<<"c is smallest";
	getche();
}
