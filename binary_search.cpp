#include <iostream>
#include <vector>

using namespace std;

int binary_search(const vector<int>& arr, int n, int key) {
    int left = 0, right = n-1;
    while(left<right)
    {
        int mid = (left+right)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key) right = mid-1;
        else left = mid+1;
    }

    return -1;
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

    cout << "enter key: ";
    int key;
    cin >> key;

    int pos = binary_search(arr, n, key);
    if(pos==-1) cout << "Not Found";
    else cout << "Key at index " << pos;

    return 0;
}
