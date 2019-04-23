#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
char s[5];(
cout<<"Enter the string";
gets(s);
for(int i=0;s[i];i++)
{cout<<" ";
for(int j=0;j<=i;j++)
cout<<s[j];
cout<<"#\n";
}
}
