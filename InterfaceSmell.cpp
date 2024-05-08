#include<iostream>
using namespace std;

//abstract information its not concrete class
class Laptop {
protected:
	Laptop() {}
private:
	string modelName;
	string color;
	string weight;
	string hostOsType;
	int storageCapacity;
};
//compile time relationship,static relationship
class HPLaptop:public Laptop {
private:
};
	
class ZeLaptop:public Laptop {
private:

};
class LenovoLaptop:public Laptop {
private:

};

int main()
{
	Laptop* obj;
}
