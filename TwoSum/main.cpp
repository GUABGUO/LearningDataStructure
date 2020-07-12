#include <iostream>
#include <vector>
using namespace std;
//方法一 暴力美学
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> return_nums(2);
        bool flag = 0;
        for (int i = 0; i < nums.size() && flag == 0; i++)
        {
            for (int j = i + 1; j < nums.size() && flag == 0; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return_nums[0]=i;
                    return_nums[1]=j;
                    flag = 1;
                }
            }
        }
        return return_nums;
    }
};

int main(int argc, char** argv)
{
    Solution solution;
    vector<int> a={1,7,19,12,2,45,23,4,98};
    cout<<solution.twoSum(a,14)[0]<<" "<<solution.twoSum(a,14)[1]<<endl;
    return 0;
}