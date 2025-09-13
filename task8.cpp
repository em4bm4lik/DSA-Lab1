#include "task8.h"
#include <string>

using namespace std;

int findSubstring(string str, string substr) {
    if (substr.empty()) 
        return -1;

    int n = str.size();
    int m = substr.size();

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && str[i + j] == substr[j]) 
            j++;
        if (j == m) 
            return i; 
    }

    return -1; 
}