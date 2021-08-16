#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
  int year =1;
  double salary = 20000;

  //output the first year salary
   cout << "Year";
   cout << setw(17) << "Salary" <<endl;
   cout << "---------------------" <<endl;
   cout << setw(2) << year 
   <<setw(11)<<"$"
   <<fixed <<showpoint <<setprecision(2)
   <<salary <<endl;
  
  //output the second year salary and so on
  while ( salary <= 50000 )
  {
    salary += salary *10/100;
    year ++;
    cout << setw(2) << year
    <<setw(11)<<"$"  <<salary <<endl;
    
  }
  cout<<"It will take " <<year 
  <<" until his salary reaches or exceeds $50,000." <<endl;
  return 0;
}
