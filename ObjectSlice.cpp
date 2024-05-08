#include<iostream>
using namespace std;

//interface
//contract
class IEmployee {
public:
	virtual void professional() = 0;
};
class IFamilyMember {
public:
	virtual void casualBehavior() = 0;
	virtual void cranky() = 0;
};

//person fullfills(implements) IEmployee contract
class Person:public IEmployee,public IFamilyMember {
public:
	void casualBehavior() {};
	void professional() {};
	void cranky() {};
};

class OfficContext {
public:
	void enter(IEmployee* obj) {
		obj->professional();
	}
};

class FamilyContext {
public:
	void enter(IFamilyMember* obj) {
		obj->casualBehavior();
		obj->cranky();
	}

};

int main()
{
	Person tom;
	FamilyContext fContext;
	OfficContext oContext;
	fContext.enter(&tom);
	oContext.enter(&tom);
}
