#include <iostream>
#include <cmath>

using namespace std;

class Power 
{
    double num1;
    double num2;
public:
    Power() {
         num1 = 1;
         num2 = 1;
    }
       void  setPower(double num, double deg) {
        num1 = num;
        num2 = deg;
    }

    void calculatePower(double num, double deg)
    {        
        cout << num1 <<"^" << num2 << "=" << pow(num1, num2);
    }

};

int main()
{
    double num = 6;
    double deg = 2;
    Power degree;
    degree.setPower(num,deg);
    degree.calculatePower(num,deg);
}

