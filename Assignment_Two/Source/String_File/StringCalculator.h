#include<iostream>
#include<string>
#include<algorithm>
#include<regex>
#include<numeric>
#include<cmath>
#include "StringCalculator_helper.cpp"
#include "StringValidator.cpp"

class StringCalculator{
public: 
    int add(string input);   
private:
   vector<int> get_numbers(const string &input);
   vector<int> numbers; 
};
