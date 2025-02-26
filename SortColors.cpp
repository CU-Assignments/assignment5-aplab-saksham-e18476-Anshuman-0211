#include <vector>
#include <iostream>

using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0; // Pointer for the next position of 0
    int mid = 0; // Pointer for the current element
    int high = nums.size() - 1; // Pointer for the next position of 2

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else { // nums[mid] == 2
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    vector<int> nums1 = {2, 0, 2, 1, 1, 0};
    sortColors(nums1);
    cout << "Sorted colors (Example 1): ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> nums2 = {2, 0, 1};
    sortColors(nums2);
    cout << "Sorted colors (Example 2): ";
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
