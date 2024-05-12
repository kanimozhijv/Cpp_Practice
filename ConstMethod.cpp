#include<iostream>
// by default this keyword is passed .that this is by default const if i mention const method then passed arg also cannot be changed 
// its possible 
class A {
	int x;
public:
	void method(int y) const { // can pass non const to const method (method scope contenxual sequence)
		//this->x = 100;
	}
};

int main()
{
	A obj;
	obj.method(1000);
	return 0;
}
