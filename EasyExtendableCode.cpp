#include<iostream>
using namespace std;
//stratergy design pattern
//late binding call , run time polyphorpishm
class TextBox {

public:
	virtual void accept(string text) {
		cout << "TextBox" << endl;
	}
};

class NumericTextBox :public TextBox {
public:
	//shawdowing if there is no implementation it will call base
	void accept(string text) override{
		cout << "NumericTextBox" << endl;
	}
};

class MakedTextBox :public TextBox {
public:
	void accept(string text) override {
		cout << "MaskedTextBox" << endl;
	}
};



int main() {
	TextBox nameTextBox;
	nameTextBox.accept("Tom");

	NumericTextBox ageTextBox;
	ageTextBox.accept("25");

	TextBox* baseptr = &ageTextBox;
	baseptr->accept("123");

	MakedTextBox maskedTextBox;
	baseptr = &maskedTextBox;

	baseptr->accept("+91-9944474988");
}
