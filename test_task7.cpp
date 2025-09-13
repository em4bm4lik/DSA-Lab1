#include <iostream>
#include "task7.h"
#include <vector>

using namespace std;

int main() {
    int arr1[] = {2, 3, 1, 7, 4, 1, 9, 1};
    vector<int> expected1 = {2, 5, 7};
    vector<int> found1 = findIndices(arr1, 8, 1);
    cout << "Test 1 (Multiple occurrences): " 
        << endl << "Array given: [2, 3, 1, 7, 4, 1, 9, 1]" << endl << "Key given: 1" << endl;
    cout << "Indices: ";
    printIndices(found1);
    cout << "Result: " << (found1 == expected1 ? "PASS" : "FAIL") << endl;

}