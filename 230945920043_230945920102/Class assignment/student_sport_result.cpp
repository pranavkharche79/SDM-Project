#include<iostream>
using namespace std;

class student
{
	
	int roll_no,m1,m2;
	public:
		student(int r,int a,int b)
		{
			roll_no=r;
			m1=a;
			m2=b;
		}
};

class sport
{

	int m3;
	public:
		sport(int c)
		{
			m3=c;
		}
};

class result:public student,sport
{
	
	public:
		int total;
		float avg;
		int roll;
		result(int r,int a,int b,int c):student(r,a,b),sport(c)
		{
			roll=r;
			total=a+b+c;
			avg=(float)total/3;
		}
		void display()
		{
			cout<<"Rollno. is = "<<roll<<endl;
			cout<<"Total is = "<<total<<endl;
			cout<<"Average is = "<<avg<<endl;
		}
};

int main()
{
	result *r1= new result(1234,10,10,10);
	r1->display();
	return 0;
}
