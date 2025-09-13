#include <iostream>
#include "task7.h"
#include <vector>

using namespace std;


vector<int> findIndices(int arr[], int size, int key) {

    // Initializing result vector
    vector<int> indices;

    // Filling it up if any element in the test array matches key
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

void printIndices(vector<int> &indices) {

    // If no key is found
    if (indices.empty()) 
        cout << "Key not found!" << endl; 

    // Otherwise printing all indices found
    else {
        for (int index : indices)
            cout << index << " ";
        cout << endl;
    }
}
