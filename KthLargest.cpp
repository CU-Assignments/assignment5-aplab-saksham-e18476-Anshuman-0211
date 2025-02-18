#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    // Min-heap to store the k largest elements
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int num : nums) {
        minHeap.push(num);
        // If the size of the heap exceeds k, remove the smallest element
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    // The root of the min-heap is the kth largest element
    return minHeap.top();
}

int main() {
    vector<int> nums1 = {3, 2, 1, 5, 6, 4};
    int k1 = 2;
    cout << "The " << k1 << "th largest element is: " << findKthLargest(nums1, k1) << endl; // Output: 5

    vector<int> nums2 = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k2 = 4;
    cout << "The " << k2 << "th largest element is: " << findKthLargest(nums2, k2) << endl; // Output: 4

    return 0;
}
