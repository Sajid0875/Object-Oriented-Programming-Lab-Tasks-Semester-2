#include <iostream>
using namespace std;

class MaxValue {
public:
    int maxval;

    MaxValue(int a, int b);      
    MaxValue(int a, int b, int c); 
};


MaxValue::MaxValue(int a, int b) {
    maxval = (a > b) ? a : b;
}


MaxValue::MaxValue(int a, int b, int c) {
    if (a > b && a > c) {
        maxval = a;
    } else if (b > a && b > c) {
        maxval = b;
    } else {
        maxval = c;
    }
}

int main() {
    MaxValue m1(20, 40);  
    cout << "Max value (2 numbers) " << m1.maxval << endl;

    MaxValue m2(20, 30, 50); 
    cout << "Max value (3 numbers) " << m2.maxval << endl;

    return 0;
}

