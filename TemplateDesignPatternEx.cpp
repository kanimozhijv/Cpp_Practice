#include<iostream>
using namespace std;
//template design pattern
class Vehicle {
private:
	string regNum;
	string name;
public:
	virtual void start() { cout << "Start" << endl; }
	virtual void stop() { cout << "Stop" << endl; }
	virtual void drive() = 0;
};

class Car :public Vehicle {
public:
	void start() override { cout << "push Button to Start" << endl; }
	void stop() override{ cout << "push Button to Stop" << endl; }
	void drive() { cout << "Car Drive" << endl; };
};
class Truck : public Vehicle {
public:
	void drive() { cout << "Truck Drive" << endl; };
};

class VehicleSimulator {
	Vehicle* v;
public:
	VehicleSimulator(Vehicle* vArg) :v{ vArg } {}
	void start() { v->start(); }
	void stop() { v->stop(); }
	void drive() { v->drive(); }
};

int main()
{
	Car carObj;
	VehicleSimulator{&carObj};

}

