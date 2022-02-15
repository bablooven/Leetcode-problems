Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

**SOLUTION**
//This is an unoptimized solution for now. Will make use of hash maps later on.

class Solution {

    public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
    
    vector<int> ans;

    for(int j=0; j<nums.size();j++)
    {
        for(int k=j+1;k<nums.size();k++)
        {
            if(nums[j]+nums[k]==target)
            {
                ans.push_back(j);
                ans.push_back(k);
            }
        }
    }
    return ans;
    }
};


//Slightly better solution using Unordered HashMaps
#include<unordered_map>

class Solution {

    public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
    
    vector<int> ans;
    unordered_map<int,int> umap;
    bool flag1 =false;
    bool flag2 =false;

    for(int j=nums.size()-1; j>=0;j--)  //Putting the values into an unordered set (Hash Set) //O(n)
    {
        umap[nums[j]]=j;
    }

    for(int k =0; k<nums.size();k++)  //O(n)
    {
        if(umap.count(target-nums[k])==1 && k!=umap[target-nums[k]])  //O(1)
        {
             flag1=true;
             ans.push_back(k);
             break;
        }
    }

    if(flag1==true)
    {
        for(int l=0;l<nums.size();l++)  //O(n)
        {
            if(nums[l] == target-nums[ans[0]])
            {
            ans.push_back(l);
            break;
            } 
        }
    }

    return ans;
    }
};
