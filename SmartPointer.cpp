#include<iostream>
using namespace std;
//smart pointer always has raw pointer of object
//smartponter is a wrapper class for raw pointer
//has a relationship
//must be in block scope allocation
//before modern c++ auto_ptr is a smart pointer
//smart pointer contains raw pointer
//eg. vehicle contains engine
class A {
public:
	A() { cout << "Cons called" << endl; }
	~A() { cout << "Des called" << endl; }
	void operation() {
		cout << "SMT PTR method called" << endl;
	}

};
template<typename T>
class SmartPointerType {
	T* ptr;
public:
	SmartPointerType(T* ptrRef) :ptr{ ptrRef } {}
	~SmartPointerType() { delete ptr; }
	T* operator->() {
		return ptr;
	}
};

void instantiate() {
	//A* ptr = new A();
	SmartPointerType<A> smarptrtype{ new A() };
	smarptrtype->operation();
}

int main()
{
	instantiate();
}
