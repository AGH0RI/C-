#include <iostream>
#include <string>

using namespace std;

class laptop
{
public:
	string name;
	float price;

	laptop()   //constructor default
	{
		cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
	}
	laptop(string lname,float lprice)    //constructor parameterized
	{
		//strcpy(name,"Ideapad");
		name=lname;
		price = lprice;
		cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
	}
	laptop(const laptop &p)       //copy constructor 
	{
		//strcpy(name,"Ideapad");
		name=p.name;
		price = p.price+1000.523;
		cout<<"Name : "<<name<<endl<<"Price : "<<price<<endl;
	}

	~laptop()       //distructor
	{
		cout<<"Distructor"<<price<<endl;
	}
};


int main()
{
	laptop l;
	laptop m("Ideapad",15000);
	laptop k=m;
	return 0;
}