#include<iostream>
using namespace std;
class Address
{
	string addressl,city,state;
	public:
	Address(string _addressl,string _city,string _state):addressl(_addressl),city(_city),state(_state){};

	string getAddressl()
	{
		return addressl;
	}
	string getCity()
	{
		return city;
	}
	string getState()
	{
		return state;
	}
};
class Employee
{
	Address *address_1;
	public:
		int id;
		string name;
		Employee(Address *address_1,int _id,string _name):address_1(address_1),id(_id),name(_name){};
		void display()
		{
			cout<<address_1->getAddressl()<<address_1->getCity()<<address_1->getState()<<" "<<id<<" "<<name<<endl;
		}
};
int main(void) 
{
 Address a1= Address("Tunali Hilmi Cad.","Ankara","TR");
 Employee e1 = Employee(&a1,102,"Ali");
 e1.display();
 return 0;
}


fdsasdfghjklşlkjhgfdsdfghjkl
