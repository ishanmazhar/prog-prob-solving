#include <iostream>
using namespace std;

class car {
public:
    int x;
private:
    int y;
};

class fruit {
    int a; //Attributes are private if not specified as public.
    int b;
};

int main() {
    car bmw;
    bmw.x = 10;
    bmw.y = 20; // error: 'int car::y' is private within this context

    cout << bmw.x << "\n";
    cout << bmw.y << "\n"; // error: 'int car::y' is private within this context

    return 0;
}
