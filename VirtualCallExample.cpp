// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
class A {
public:
	virtual void M1() { cout << "A.M1()" << endl; }
	void M2() { cout << "A.M2()" << endl; }
};
class B :public A {
public:
	void M1() override final { cout << "B.M1()" << endl; }
	void M2() { cout << "B.M2()" << endl; }
	virtual void M3() { cout << "B.M3()" << endl; }
	void M4() { cout << "B.M4" << endl; }
};
class C :public B {
public:
	//void M1()  { cout << "C.M1()" << endl; } //override
	void M3() override { cout << "C.M3()" << endl; }
	void M4() { cout << "C.M4()" << endl; }
};
int main() {
	A aObj;
	A* aPtr = &aObj;
	aPtr->M1(); //virtual A.M1()
	//aPtr->M2(); //non

	B bObj;
	B* bPtr = &bObj;
	bPtr->M1(); //virtal B.M1()
	//->M2(); //non
	bPtr->M3(); //virtual B.M3()
	//bPtr->M4(); //non

	aPtr = &bObj;
	aPtr->M1(); //virtual B.M1()
	//aPtr->M2(); //non

	C cObj;
	cObj.M1(); //virtual c.M1()
	//	cObj.M2();//non
	cObj.M3();//virtual c.M3()
	//	cObj.M4();//non

	aPtr = &cObj;
	aPtr->M1();//non C.M1()
	//aPtr->M2();//non

	bPtr = &cObj;
	//bPtr->M1();//non
	//bPtr->M2();//non
	bPtr->M3();//virtual c.M3()
	//	bPtr->M4();//non

}
