/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <stdio.h>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   std::cout << "Enter Employee Type : " << endl;
   std::cin << &etype << endl;
   std::cout << "Enter Salary  : " << endl;
   std::cin << &salary << endl;
   std::out << "Enter OtHrs : " << endl;
   std::cin << &otHrs << endl; 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs * otRate;
   std::cout << "Net Salary is  " << netSalary << endl;
  
   return 0;
}
