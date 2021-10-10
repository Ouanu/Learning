#include <iostream>
#include <vector>
#include <map>
using namespace std;

void countSort(vector<int> &nums);

int main()
{
    vector<int> nums = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
    countSort(nums);
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

void countSort(vector<int> &nums)
{
    map<int, int> count;
    map<int, int>::iterator iter;
    for (int i = 0; i < nums.size(); i++)
    {
        count[nums[i]]++;
    }
    int len = 0;
    for (iter = count.begin(); iter != count.end(); iter++)
    {
        for (int j = 0; j < iter->second; j++)
        {
            nums[len] = iter->first;
            len++;
        }
    }
}
