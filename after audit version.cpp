#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;   // ✅ safer than char array

    cout << "Enter your name: ";
    getline(cin, name);   // ✅ safe input handling

    cout << "Hello, " << name << endl;

    string data = "Welcome!";  // ✅ safe string, no malloc needed
    cout << data << endl;

    return 0;
}
