// Arrays/FindMax.cpp

#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int> arr) {
    int maxVal = arr[0];
    for (int num : arr) {
        if (num > maxVal) maxVal = num;
    }
    return maxVal;
}

int main() {
    vector<int> arr = {1, 5, 2, 9, 3};
    cout << "Maximum number: " << findMax(arr) << endl;
    return 0;
}
