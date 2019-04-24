
#include <iostream.h>
using namespace std;

void main()
{
  int Num, temp, rem, sum = 0;
  cout << "Enter a positive  integer: ";
  cin >> Num;

  temp = Num;

  while(temp!= 0)
  {
      rem = temp% 10;
      sum += rem * rem * rem;
      temp/= 10;
  }

  if(sum == Num)
    cout << Num << " is an Armstrong number.";
  else
    cout << Num << " is not an Armstrong number.";

  
}


