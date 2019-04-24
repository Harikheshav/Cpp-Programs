//NPR AND NCR
#include<iostream.h>
#include<conio.h>
long int fact(int);   //function declaration
void main()
{
	clrscr();
	int n, r;
	long int ncr, npr;
	cout<<"Enter the value of n : ";
	cin>>n;
	cout<<"Enter the value of r : ";
	cin>>r;
	npr=fact(n)/fact(n-r);    // calling the function or function calling
	ncr=npr/fact(r);          //function calling
	cout<<"NPR value = "<<npr<<"\n";
	cout<<"NCR value = "<<ncr<<"\n";
	getch();
}
long int fact(int x)          //function definition
{
  if(x==1) return 1

  else return x*fact(x-1);
}
