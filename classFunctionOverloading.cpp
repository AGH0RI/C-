#include <iostream>
#include<string>

using namespace std;

class laptop
{
public:
	int processor;
	string name;



	void run()
	{
		cout<<"Run is running."<<endl;
	}

	void run(int a)
	{
		cout<<"Run with int "<<a<<" is running."<<endl;
	}
	
};



int main()
{
	laptop l;
	l.run();
	l.run(5);
	
	return 0;
}