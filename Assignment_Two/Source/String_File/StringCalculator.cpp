#include"StringCalculator.h"
#include<algorithm>
#include<numeric>
using namespace std;

int StringCalculator::add(string input){
	StringValidator validateNumber;
        if (input.empty())
		return 0;

	vector<int> numbers = get_numbers(input);

	validateNumber.check_for_negatives(numbers);

	return accumulate(numbers.begin(), numbers.end(), 0);
}


