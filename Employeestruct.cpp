#include<iostream.h>

       struct Employee
       {
              int Id;
              char Name[25];
              int Age;
              long Salary;
       };

       void main()
       {
              int i;
              Employee E[ 3 ];         //Array of Structure

              for(i=0;i<3;i++) //Reading Details
              {

              cout << "\nEnter details of " << i+1 << " Employee";//Array index 'i' starts with 0

                    cout << "\n\tEnter Employee Id : ";
                    cin >> E[i].Id;

                    cout << "\n\tEnter Employee Name : ";
                    cin >> E[i].Name;

                    cout << "\n\tEnter Employee Age : ";
                    cin >> E[i].Age;

                    cout << "\n\tEnter Employee Salary : ";
                    cin >> E[i].Salary;
              }

              cout << "\nDetails of Employees"; //Printing Details 
              for(i=0;i<3;i++)
              cout << "\n"<< E[i].Id <<"\t"<< E[i].Name <<"\t"
                       << E[i].Age <<"\t"<< E[i].Salary
                 
              sort(E); //BubbleSort

              cout << "\nDetails of Employees after sorting"; //Printing Details 
              for(i=0;i<3;i++)
              cout << "\n"<< E[i].Id <<"\t"<< E[i].Name <<"\t"
                       << E[i].Age <<"\t"<< E[i].Salary
       }
void sort(Employee E[],int n=3)
   { int i,j; 
   Employee temp;
    for(i=1;i<n;++i)
	{
		for(j=0;j<(n-i);++j)
			if(E[j].Id>E[j+1].Id)
			{
				temp=E[j];
				E[j]=E[j+1];
				E[j+1]=temp;
			}
	}
	

