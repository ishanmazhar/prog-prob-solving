#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    //Constructor of the class.
    //Constructor is automatically called when
        //an object of a class is created.
    //Constructor must have the same name as the class name.
    //Constructor is always public.
    //Constructor does not have any return value.
    //Constructor can take parameters like regular functions.
    Car() {
        cout << "This is a car class.";
    }
    //Attributes
    string model;
    int year;
};

int main() {
    Car Toyota;
    return 0;
}
