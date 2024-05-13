#include<string>
class StringCalculatorHelper{
	public:
	std::string negatives;
void operator()(int i) {
		if (i < 0)
			negatives.append(std::to_string(i) + ",");
	}

operator std::string()  {
		if (negatives.length() > 0)
			negatives.pop_back();

		return negatives;

    }
};
