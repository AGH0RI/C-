#include <iostream>
#include <string>
using namespace std;


class laptop
{
public:
	laptop()
	{
		cout<<"Base class called"<<endl;
	}
	string name;
	float price;
};

class gamingLaptop :public laptop
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