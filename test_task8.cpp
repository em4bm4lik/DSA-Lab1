#include <iostream>
#include "task8.h"
using namespace std;

int main() {
    string str1 = "hello world";
    string substr1 = "hello";
    int found1 = findSubstring(str1, substr1);
    cout << endl << "Test 1 (Pattern at beginning): " << endl;
    cout << "String given: " << str1 << endl << "Substring to be found: " << substr1 << endl;
    cout << "Found at Index: " << found1 << endl;
    cout << "Result: " << ((found1 == 0) ? "PASS" : "FAIL") << endl;
}