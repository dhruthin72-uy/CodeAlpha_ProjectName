#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    char name[10];
    char *data;

    cout << "Enter your name: ";
    cin >> name;   // ❌ Unsafe: may cause buffer overflow

    cout << "Hello, ";
    cout << name << endl;

    data = (char*)malloc(10);
    strcpy(data, "Welcome!");  // ❌ Risky: buffer overflow possible
    // ❌ No free(data) -> memory leak

    return 0;
}
