#include<iostream>
#include<string>

using namespace std;

class Device {
private:
	string name;
	string model;
	string version;
public:
	~Device() { cout << "Device Destr" << endl; }
protected:
	Device(string nameArg, string modelArg, string versionArg) :name{ nameArg }, model{ modelArg }, version{ versionArg } { cout << "Device cons" << endl; }
};

class IPrinter
{
public:
	virtual void print(string) = 0;

};
class IScanner
{
public:
	virtual void scan(string) = 0;
};
class Printer: virtual public Device,public IPrinter{
public:
	Printer() : Device{"print ", "print ", "print "} {}
	void print(string content) {
		cout <<  "print " << content << endl;
	}
public:
	~Printer() { cout << "printer dest" << endl; }
	
};
class Scanner:virtual public Device,public IScanner {

public:
	Scanner() : Device{ "print ", "print ", "print " } {}
	~Scanner() { cout << "scanner dest" << endl; }
	void scan(string content) {
		cout << "print " << content << endl;
	}
private:
	
};
class PrintScanner :public Device,public IPrinter,public IScanner {
	Printer printObj;
	Scanner ScannerObj;
public:
	void print(string content) {
		this->printObj.print(content); //Delegation call
	}
	void scan(string content) {
		this->ScannerObj.scan(content); //Delegation call
	}
	PrintScanner(string name, string model, string version) :Device{ name,model,version } {}

};

class TaskManager {
public:
	TaskManager() {
		cout << "TaskMAnager" << endl;
	}
	~TaskManager() {}
	void invokePrintTask(IPrinter* printerPtr, string content)
	{
		printerPtr->print(content);
	}
	void invokeScannerTask(IScanner* scannerPtr, string content)
	{
		scannerPtr->scan(content);
	}
};

int main()
{
	Printer hpPrinter;
	Scanner hpScanner;
	PrintScanner hpPrintScanner("print ", "print ", "print ");
	TaskManager taskManager;
	taskManager.invokePrintTask(&hpPrintScanner, "doc.pdf");
	taskManager.invokePrintTask(&hpPrinter, "doc.pdf");
	taskManager.invokeScannerTask(&hpScanner, "doc.pdf");
}
