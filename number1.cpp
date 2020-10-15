#include<iostream>
#include<string>
using namespace std;

class Person
{
  public:
   int age;
   string fullName;
   string phoneNumber;
};

class Student:public Person
{
  public:
   int studentId;
   string schoolName;
   void study() 
     {
        cout<<"studying"<<endl;
     }
};

class Employee:public person
{
  public:
   int employeeId;
   string companyName;
   void work()
     {
        cout<<"working"<<endl;
     }
};

   int main()
{
  return 0;
}