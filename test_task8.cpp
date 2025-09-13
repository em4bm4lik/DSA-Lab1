#include <iostream>
#include "task8.h"
using namespace std;

int main() {

    // Test 1: Substring at the beginning
    string str1 = "hello world";
    string substr1 = "hello";
    int found1 = findSubstring(str1, substr1);
    cout << endl << "Test 1 (Pattern at beginning): " << endl;
    cout << "String given: " << str1 << endl
        << "Substring to be found: " << substr1 << endl;
    cout << "Found at Index: " << found1 << endl;
    cout << "Result: " << ((found1 == 0) ? "PASS" : "FAIL") << endl;

    // Test 2: Substring at the end
    string str2 = "this is a test";
    string substr2 = "test";
    int found2 = findSubstring(str2, substr2);
    cout << endl << "Test 2 (Pattern at end): " << endl;
    cout << "String given: " << str2 << endl
        << "Substring to be found: " << substr2 << endl;
    cout << "Found at Index: " << found2 << endl;
    cout << "Result: " << ((found2 == 10) ? "PASS" : "FAIL") << endl;

    // Test 3: Substring not present
    string str3 = "abcdef";
    string substr3 = "gh";
    int found3 = findSubstring(str3, substr3);
    cout << endl << "Test 3 (Pattern not present): " << endl;
    cout << "String given: " << str3 << endl
        << "Substring to be found: " << substr3 << endl;
    cout << "Found at Index: " << found3 << endl;
    cout << "Result: " << ((found3 == -1) ? "PASS" : "FAIL") << endl;

    // Test 4: No Substring to be found
    string str4 = "abcdef";
    string substr4 = "";
    int found4 = findSubstring(str4, substr4);
    cout << endl << "Test 4 (Empty pattern): " << endl;
    cout << "String given: " << str4 << endl
        << "Substring to be found: \"" << substr4 << "\"" << endl;
    cout << "Found at Index: " << found4 << endl;
    cout << "Result: " << ((found4 == -1) ? "PASS" : "FAIL") << endl;

}