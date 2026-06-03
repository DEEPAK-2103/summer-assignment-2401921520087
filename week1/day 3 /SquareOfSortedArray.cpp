#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);

    int left = 0;
    int right = n - 1;
    int index = n - 1;

    while (left <= right) {
        int leftSqr = nums[left] * nums[left];
        int rightSqr = nums[right] * nums[right];

        if (leftSqr > rightSqr) {
            result[index] = leftSqr;
            left++;
        } else {
            result[index] = rightSqr;
            right--;
        }

        index--;
    }

    return result;
}

int main() {
    vector<int> nums1 = {-7, -3, 2, 3, 11};
    vector<int> nums2 = {-4, -1, 0, 3, 10};

    vector<int> result1 = sortedSquares(nums1);
    vector<int> result2 = sortedSquares(nums2);

    cout << "Result 1: ";
    for (int i = 0; i < result1.size(); i++) {
        cout << result1[i] << " ";
    }
    cout << endl;

    cout << "Result 2: ";
    for (int i = 0; i < result2.size(); i++) {
        cout << result2[i] << " ";
    }
    cout << endl;

    return 0;
}
