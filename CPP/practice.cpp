#include<iostream>
#include <string>
using namespace std;

int print();

int main() {
    int a = 2;
    int b = 5;
    int &c = b; 
    int* ptr = &a;
    string str = "I am a boy";
    cout << "Sum is = " << a + b << endl;
    cout << ptr << "\n";
    cout << *ptr << endl;
    cout << str << endl;
    printf("%c\n", str); 
    printf("%d\n", c); 
    print(); 
    return 0;
}
int print() {
    printf("Hellow World\n");
    return 0;
}
