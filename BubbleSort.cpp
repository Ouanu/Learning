#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &nums);

int main()
{
    vector<int> nums = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    bubbleSort(nums);
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

void bubbleSort(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = 0; j < nums.size() - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                // int mid = nums[j];
                // nums[j] = nums[j+1];
                // nums[j+1] = mid;
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}