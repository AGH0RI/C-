#include <iostream>
#include <string>
using namespace std;

class gamingSystem
{
public:
	gamingSystem(){
		cout<<"Base class 1 called"<<endl;
	}
};

class laptop
{
public:
	laptop()
	{
		cout<<"Base 2 class called"<<endl;
	}
	string name;
	float price;
};

class gamingLaptop :public laptop,public gamingSystem
{
public:
	gamingLaptop()
	{
		cout<<"Derived class called"<<endl;
	}
	string name;
	int vram;
	
};

int main()
{
	gamingLaptop lap1;
	return 0;
}