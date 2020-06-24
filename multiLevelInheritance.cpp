#include <iostream>
#include <string>
using namespace std;


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

class gamingLaptop :public laptop
{
public:
	gamingLaptop()
	{
		cout<<"Derived 1 class called"<<endl;
	}
	string name;
	int vram;
	
};
class gamingSystem :public gamingLaptop
{
public:
	gamingSystem(){
		cout<<"Derived 2 class called"<<endl;
	}
};


int main()
{
	gamingSystem lap1;
	return 0;
}