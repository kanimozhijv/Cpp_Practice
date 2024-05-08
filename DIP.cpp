#include<iostream>
using namespace std;
//Depedency injection principle
class IEngine {
public:
	virtual void start() = 0;
	virtual void stop() = 0;
};

class MPFIEngine :public IEngine {
public:
	void start(){};
	void stop(){};
};

class GDIEngine :public IEngine {
public:
	void start() {};
	void stop() {};
};

class XUV3XO {
	IEngine* engine;
public:
	XUV3XO(IEngine* engineArg) :engine{ engineArg } {}
	void drive() {
		engine->start();
	}
	void halt() {
		engine->stop();
	}
};

int main()
{
	MPFIEngine napEngine;
	GDIEngine turboEngine;
	XUV3XO car{ &napEngine };
	car.drive();
	XUV3XO turboservice{&turboEngine};
	turboservice.drive();
}
