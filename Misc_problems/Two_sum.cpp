// 1. Two sum problem (Easy)

#include <iostream> //For C++
#include <stdio.h>  //For C
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    unordered_map<int,int> umap;
    bool flag1 =false;

    for(int j=0; j<nums.size();j++)  //Putting the values into an unordered set (Hash Set) //O(n)
    {
        umap[nums[j]]=j;
    }

    for(int k =0; k<nums.size();k++)  //O(n)
    {
         if(umap.count(target-nums[k])==1 && k!=umap[target-nums[k]])  //O(1)
         {
             flag1=true;
             ans.push_back(k);
         }
    }

    if(flag1==true)
    {
        for(int l=0;l<nums.size();l++)  //O(n)
        {
            if(nums[l]==(target-ans[0]))
            ans.push_back(l);
        }
    }
    
    //Unoptimised solution using O(n^2) in time complexity
    // for(int j=0; j<nums.size();j++)  //O(n^2)
    // {
    //     for(int k=j+1;k<nums.size();k++)
    //     {
    //         if(nums[j]+nums[k]==target)
    //         {
    //             ans.push_back(j);
    //             ans.push_back(k);
    //         }
    //     }
    // }
    return ans;
}
int main()
{  
    //target=9
    int target = 6;
    vector<int> g1;
    
    //Insertion to the vector at the end O(1)
    g1.push_back(3);
    g1.push_back(2);
    g1.push_back(4);
    //g1.push_back(4);
    //g1.push_back(5);
    
    vector<int> ans = twoSum(g1, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}