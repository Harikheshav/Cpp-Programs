#include<iostream>
#include<string.h>
using namespace std;
class GPA
{
	public:
		char grade[2];
		int pts;
		float credits;
	GPA()
	{
	cout<<"Credits:";
	cin>>credits;
	cout<<"Grade:";
	cin>>grade;	
	if(strcmpi(grade,"o")==0)
	pts=10;
	else if(strcmpi(grade,"a+")==0)
	pts=9;
	else if(strcmpi(grade,"a")==0)
	pts=8;
	else if(strcmpi(grade,"b+")==0)
	pts=7;
	else if(strcmpi(grade,"b")==0)
	pts=6;
	else
	pts=0;	
	}	
};

int main()
{
	cout<<"\t\tRegulation-2018 GPA CALCULATOR\n";
	cout<<"Note:Calculation can be done only upto 8 subjects if lesser subjects\nput Credit and Grade=0\n";
	float grad_cred,sumofcredits,totalgrad_cred=0.0,totalsoc=0.0,gpa;
	char ch;
	int n;
	cout<<"Semesters Attended:";
	cin>>n;
	for(int k=0;k<n;k++)
	{
	GPA Calc[8];
	grad_cred=0.0;
	sumofcredits=0.0;
	for(int i=0;i<8;i++)
	{
	grad_cred=grad_cred+Calc[i].credits*Calc[i].pts;
	sumofcredits=sumofcredits+Calc[i].credits;
	gpa=grad_cred/sumofcredits;
	}
	totalgrad_cred=totalgrad_cred+grad_cred;
	totalsoc=totalsoc+sumofcredits;
	cout<<"\nSemester-"<<k+1<<":-GPA: "<<gpa<<endl;
	}
	cout<<"\nCGPA:"<<totalgrad_cred/totalsoc;
}
