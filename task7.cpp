#include <iostream>
#include "task7.h"
#include <vector>

using namespace std;

vector<int> findIndices(int arr[], int size, int key) {
    vector<int> indices;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

void printIndices(vector<int> &indices) {
    if (indices.empty()) 
        cout << "Key not found!" << endl; 
    else {
        for (int index : indices)
            cout << index << " ";
        cout << endl;
    }
}
