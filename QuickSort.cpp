#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int> &nums, int low, int high);
int partition(vector<int> &nums, int i, int j);
int main()
{
    vector<int> nums = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    cout << nums.size()-1 << endl;
    quickSort(nums, 0, nums.size()-1);
    
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

void quickSort(vector<int> &nums, int low, int high)
{
    if(low < high) {
        cout << "low, high:" << low << " " << high << endl;
        int m = partition(nums, low, high);
        cout << "m:" << m << endl;
        quickSort(nums, low, m-1);
        quickSort(nums, m+1, high);
    }
}

int partition(vector<int> &nums, int i, int j){
    int pivot = nums[i];
    int m = i;
    for (int k = i+1; k <= j; k++)
    {
        if(nums[k] < pivot) {
            m++;
            swap(nums[k], nums[m]);
        }
    }
    swap(nums[i], nums[m]);
    return m;

}