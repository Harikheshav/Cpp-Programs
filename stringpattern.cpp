#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
char s[5];(
cout<<"Enter the string";
gets(s); //Read string
for(int i=0;s[i];i++) //Outer loop 
{cout<<" ";
for(int j=0;j<=i;j++) //Inner loop
cout<<s[j];
cout<<"#\n";
}
}
