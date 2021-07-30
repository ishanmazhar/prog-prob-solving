#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        //Attributes
        string name;
        int age;
        //Methods
        void ageInfo() {
            cout << name << "'s age is " << age << " years.\n";
        };
        void outsideClass();
};

void Person::outsideClass() {
    cout << "This method is outside of the class.\n";
    cout << "Still it can access the class attribute age \nwhich is " << age << " years.\n";
};

int main() {
    Person Ishan;
    Ishan.name = "Mazhar";
    Ishan.age = 32;

    cout << Ishan.name << "\t" << Ishan.age << endl;

    Ishan.ageInfo();
    Ishan.outsideClass();

    return 0;
}
