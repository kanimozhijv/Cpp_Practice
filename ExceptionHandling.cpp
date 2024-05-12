#include<iostream>
using namespace std;

bool divfun(int divisor, int dividend)
{
    int result;
    try {
        result = divisor / dividend;
    }
    catch (...){
        ///catch(runtime_error& errObj){
            //cout<< errObj.what() <<endl;
        cout << "Exception" << endl;
}
return result;
}
void init() {
    divfun(10, 0);
}

int main() {
    init();
}

//call stack main->init->div
// this try catch wont work for c++ standard cl;ass
