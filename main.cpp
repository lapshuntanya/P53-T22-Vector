//#include "myVector.h"
//#include <string>
//STL = namespace std
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int main() {
    //TASK 1
   /*
    * Vector<int> v1; //size = 0
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
    v3.push_back("c++");


    v1.print();
    v2.print();
    v3.print();
    cout << "================================\n";

    v1[0] = -56;
    v2[1]= -56.78;
    v3[2] = "apple";

    v1.print();
    cout << "Max: " << v1.find_max() << " Min: " << v1.find_min() << "\n\n";

    v2.print();
    cout << "Max: " << v2.find_max() << " Min: " << v2.find_min() << "\n\n";

    v3.print();
    cout << "Max: " << v3.find_max() << " Min: " << v3.find_min() << "\n\n";
*/


    //TASK2
    vector<int> v1;
    for (int i = 0; i < 10; ++i) {
        v1.push_back( rand()%100 - 50);
    }

    //1 спосіб = обробки масиву через індекс
    for(int i =0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }cout << endl;

    //2 спосіб = обробки масиву через ітератор
    vector<int>::iterator it;
    for (it = v1.begin(); it < v1.end(); it++) {
        cout << *it << " ";
    }cout << endl;

    //3 спосіб = обробки масиву як контейнеру
    for (int a:v1) { //v1 = [1, 2, 3]
        cout << a << " ";
    }cout << endl;


    for (auto a:v1) { //v1 = [1, 2, 3]
        cout << a << " ";
        a = 2;
    }cout << endl;//v1 = [1, 2, 3]


    for (auto& a:v1) { //v1 = [1, 2, 3]
        cout << a << " ";
        a = 2;
    }cout << endl;//v1 = [2, 2, 2]

    return 0;
}