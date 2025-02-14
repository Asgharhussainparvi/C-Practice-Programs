#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int marks;
	cout<<"enter the marks"<<endl;
	cin>>marks;
	if(marks>=80)
	  cout<<"the gade is A";
	  else if (marks>=70)
	  cout<<"the grade is B";
	   else if(marks>=60)
	   cout<<"Grade is C";
	   else if (marks>=50)
	   cout<<" the Grade is D";
	   else
	   cout<<"the Grade is F";
	   getch();
}
