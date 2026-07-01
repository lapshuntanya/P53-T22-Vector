#include "myVector.h"
#include <string>

int main() {

    Vector<int> v1; //size = 0
    Vector<double> v2(2, 0.5);  //size=2, [0.5, 0.5]
    Vector<string> v3(3, "step"); //size =3, ["step", "step", "step"]

    v1.print();
    v2.print();
    v3.print();
    cout << "================================\n";
    v1.push_back(8);
    v1.push_back(-23);

    v2.push_back(12.45);

    v3.push_back("it");
    v3.push_back("hello");
    v3.push_back("C++");


    v1.print();
    v2.print();
    v3.print();
    cout << "================================\n";


    return 0;
}