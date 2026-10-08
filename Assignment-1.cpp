#include <iostream>
#include <string>
using namespace std;

class student
{
private:
int roll_number;
string name;
float marks;
public:
void getdata()
	{
		cout<<"Enter your Name : "<<endl;
		cin.ignore();
		getline(cin,name);

		cout<<"Enter your Roll Number : "<<endl;
		cin>>roll_number;

		cout<<"Enter your Marks : "<<endl;
		cin>>marks;
	}

void result()
	{
		if (marks>=35)
		{
		cout<<"Congrats! You are Pass"<<endl;
		}

		else
		{
		cout<<"Sorry, You are Fail"<<endl;
		}
	}

void display()
	{
		cout<<"--- STUDENT DETAILS---"<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Roll Number : "<<roll_number<<endl;
		cout<<"Marks : "<<marks<<endl;

		result();
	}
};

int main ()
	{
	student s;
	s.getdata();
	s.display();

	return 0;
	}
