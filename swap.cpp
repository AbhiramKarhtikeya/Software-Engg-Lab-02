#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    // Taking input from the user
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
