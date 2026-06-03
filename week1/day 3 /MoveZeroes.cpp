#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int insertPos = 0;

    // move all non-zero elements to front
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }

     
    while (insertPos < nums.size()) {
        nums[insertPos] = 0;
        insertPos++;
    }
}

int main() {
    vector<int> nums1 = {0, 1, 0, 3, 12};
    vector<int> nums2 = {0};

    moveZeroes(nums1);
    moveZeroes(nums2);

    
    cout << "[";
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i];
        if (i < nums1.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

     
    cout << "[";
    for (int i = 0; i < nums2.size(); i++) {
        cout << nums2[i];
        if (i < nums2.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
