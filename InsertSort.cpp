#include <iostream>
#include <vector>
using namespace std;

void insertSort(vector<int> &nums);

int main()
{
    vector<int> nums = {3, 3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    insertSort(nums);
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

void insertSort(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int num = nums[i];
        int temp = i;
        for (int j = i; j > 0; j--)
        {
            if(nums[j] >= nums[j-1]){
                break;
            } else {
                swap(nums[j], nums[j-1]);
            }
        }
    }
}