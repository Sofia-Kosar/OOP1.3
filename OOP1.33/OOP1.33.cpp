#include <iostream>
#include "LongLong.h"
using namespace std;



int main() {
   
    LongLong a;
    cout << "Enter values for object a:" << endl;
    a.Read();
    cout << "Object : a ";
    a.Display();

    cout << "Object a as a single number: " << a.toLong() << endl;

    LongLong b;
    cout << "Enter values for object b:" << endl;
    b.Read();
    cout << "Object b: ";
    b.Display();
    cout << "Object b as a single number: " << b.toLong() << endl;

    LongLong c = add(a, b);
    cout << "Result of addition as a single number: " << c.toLong() << endl;
   
    LongLong d = multiply(a, b);
    cout << "Result of multiplication as a single number: " << d.toLong() << endl; 

    if (lessThan(a, b)) {
        cout << "a is less than b" << endl;
    }
    if (notLessThan(a, b)) {
        cout << "a is not less than b" << endl;
    }
    if (greaterThan(a, b)) {
        cout << "a is greater than b" << endl;
    }

    return 0;

}

   