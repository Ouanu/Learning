#include <iostream>
#include <vector>
using namespace std;

void selectSort(vector<int> &nums);

int main()
{
    vector<int> nums = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    selectSort(nums);
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

void selectSort(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[min] > nums[j])
            {
                min = j;
            }
        }
        swap(nums[i], nums[min]);
    }
}