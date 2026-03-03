#include <iostream>
using namespace std;

// User defined class template
template <class T>
class Number {
    T value;
public:
    Number(T v) {
        value = v;
    }

    void show() {
        cout << "Value = " << value << endl;
    }

    T square() {
        return value * value;
    }
};


int main() {
    int x;
    double y;

    cout << "Enter an integer number: ";
    cin >> x;
    // int type ke liye object
    Number<int> n1(x);
    n1.show();
    cout << "Square (int) = " << n1.square() << endl;

    // double type ke liye object
    cout << "Enter a double number: ";
    cin >> y;
    Number<double> n2(y);
    n2.show();
    cout << "Square (double) = " << n2.square() << endl;

    return 0;
}