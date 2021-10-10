#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void shellSort(vector<int> &nums, int len);

int main()
{
    vector<int> nums = {2, 3, 4, 1, 5, 7, 8, 6, 9};
    int len = nums.size();
    shellSort(nums, len);
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

void shellSort(vector<int> &nums, int len)
{
    if (len <= 0)
        return;
    for (int i = 0; i + len / 2 < nums.size(); i++)
    {
        if (nums[i] > nums[i + len / 2])
            swap(nums[i], nums[i + len / 2]);
    }
    shellSort(nums, len / 2);
}
