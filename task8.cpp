#include "task8.h"
#include <string>

using namespace std;

int findSubstring(string str, string substr) {

    // Returning none found coed '-1' if no substring passed
    if (substr.empty()) 
        return -1;

    int n = str.size();
    int m = substr.size();

    // Checking character by character
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && str[i + j] == substr[j]) 
            j++;
        if (j == m) 
            return i; // Matching string found starting at index i
    }

    return -1;  // No substring found
}