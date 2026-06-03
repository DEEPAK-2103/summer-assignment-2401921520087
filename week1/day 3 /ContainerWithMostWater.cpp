#include <iostream>
#include <algorithm>
using namespace std;

int maxArea(int height[], int n) {
    int maxArea = 0;
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int currArea = min(height[left], height[right]) * (right - left);

        if (currArea > maxArea) {
            maxArea = currArea;
        }

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}

int main() {
    int height1[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n1 = sizeof(height1) / sizeof(height1[0]);

    int height2[] = {1, 1};
    int n2 = sizeof(height2) / sizeof(height2[0]);

    cout << "Maximum Area for first array = " << maxArea(height1, n1) << endl;
    cout << "Maximum Area for second array = " << maxArea(height2, n2) << endl;

    return 0;
}
