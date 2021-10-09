#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int> &nums, int low, int high);
void mergeSortRecursive(vector<int> &nums, int low, int mid, int high);
int main()
{
    vector<int> nums = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    mergeSort(nums, 0, nums.size()-1);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
        if (i != nums.size() - 1)
        {
            cout << ",";
        }
        else
        {
            cout << endl;
        }
    }

    return 0;
}

void mergeSort(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        cout << "low,mid,high:" << low << " " << mid << " " << high << " " << endl;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid+1, high);
        mergeSortRecursive(nums, low, mid, high);
    }
}

void mergeSortRecursive(vector<int> &nums, int low, int mid, int high)
{
    // subarray1 = a[low..mid], subarray2 = a[mid+1..high], both sorted
    int N = high - low + 1;
    int b[N]; // 讨论: 为什么我们需要一个临时的数组 b?
    int left = low, right = mid + 1, bIdx = 0;
    while (left <= mid && right <= high) // 归并
        b[bIdx++] = (nums[left] <= nums[right]) ? nums[left++] : nums[right++];
    while (left <= mid)
        b[bIdx++] = nums[left++]; // leftover, if any
    while (right <= high)
        b[bIdx++] = nums[right++]; // leftover, if any
    for (int k = 0; k < N; k++)
        nums[low + k] = b[k]; // copy back
}