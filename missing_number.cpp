#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(const vector<int>& arr, int n) {
    int totalSum = n * (n + 1) / 2;  /
    int arrSum = 0;
    
    
    for (int num : arr) {
        arrSum += num;
    }

   
    return totalSum - arrSum;
}

int main() {
    int n;
    cout << "Enter the total number of elements (n): ";
    cin >> n;

    vector<int> arr(n - 1);

    cout << "Enter the " << n - 1 << " elements of the array (1 to n): ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
