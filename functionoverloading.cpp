#include <iostream>


using namespace std;

void run()
{
	cout<<"Run Fuction ."<<endl;
}

void run(int a)
{
	cout<<"Run with int "<<a<<" is running."<<endl;
}

void run(int a ,int b)
{
	cout<<"Run with int "<<a<<" is running."<<endl;
}


void run(char a ,int b)
{
	cout<<"Run with int "<<a<<" is running."<<endl;
}


void run(int a ,char b)
{
	cout<<"Run with int "<<a<<" is running."<<endl;
}



int main(int argc, char const *argv[])
{
	run();
	run(2);
	
	return 0;
}