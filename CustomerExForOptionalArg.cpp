#include<iostream>
#include<string>

using namespace std;

class Customer
{
private:
	string name, address, pan, adhar, emailId, contactNumber;
public:
	Customer(string nameArg, string addressArg, string panArg, string adharArg)
		:name{ nameArg }, address{ addressArg }, pan{ panArg }, adhar{ adharArg } {}

		// mutators for optional argument 
	void setContactNumber(string contactNumberArg) {
		this->contactNumber = contactNumberArg;
	}
	void setEmailId(string emailIdArg) {
		this->contactNumber = emailIdArg;
	}

};
class CustomerBuilder {
public:
	CustomerBuilder(string nameArg, string addressArg, string panArg, string adharArg) {
	}

};

int main()
{

	Customer CustomerObj{ "Tom","BLR","HIYKJKU","123478" };
	return 0;
}
