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
                       << E[i].Age <<"\t"<< E[i].Salary;


       }

