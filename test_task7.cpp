#include <iostream>
#include "task7.h"
#include <vector>

using namespace std;

int main() {


    // Test case 1 : Multiple Occurences
    int arr1[] = {2, 3, 1, 7, 4, 1, 9, 1};
    vector<int> expected1 = {2, 5, 7};
    vector<int> found1 = findIndices(arr1, 8, 1);
    cout << endl << "Test 1 (Multiple occurrences): " 
        << endl << "Array given: [2, 3, 1, 7, 4, 1, 9, 1]" << endl << "Key given: 1" << endl;
    cout << "Indices: ";
    printIndices(found1);
    cout << "Result: " << (found1 == expected1 ? "PASS" : "FAIL") << endl;


    // Test case 2: Key not present
    int arr2[] = {2, 3, 1, 7, 4, 1, 9, 1};
    vector<int> expected2 = {};
    vector<int> found2 = findIndices(arr2, 8, 8);
    cout << endl << "Test 2 (Key not present): " 
        << endl << "Array given: [2, 3, 1, 7, 4, 1, 9, 1]" << endl << "Key given: 8" << endl;
    cout << "Indices: ";
    printIndices(found2);
    cout << "Result: " << (found2 == expected2 ? "PASS" : "FAIL") << endl;


    // Test case 3: Empty array
    int arr3[] = {};
    vector<int> expected3 = {};
    vector<int> found3 = findIndices(arr3, 0, 1);
    cout << endl << "Test 3 (Empty array): " 
        << endl << "Array given: []" << endl << "Key given: 1" << endl;
    cout << "Indices: ";
    printIndices(found3);
    cout << "Result: " << (found3 == expected3 ? "PASS" : "FAIL") << endl;

}