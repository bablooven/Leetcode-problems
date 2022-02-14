// 1. Two sum problem (Easy)

#include <iostream> //For C++
#include <stdio.h>  //For C
#include<vector>

using namespace std;

vector<int> twoSum(vector<int> &num, int target)
{
    vector<int> ans;

    for(int j=0; j<num.size();j++)
    {
        for(int k=j+1;k<num.size();k++)
        {
            if(num[j]+num[k]==target)
            {
                ans.push_back(j);
                ans.push_back(k);
            }
        }
    }
    return ans;
}
int main()
{  
    //target=9
    int target = 9;
    vector<int> g1;
    
    //Insertion to the vetor at the end O(1)
    g1.push_back(1);
    g1.push_back(2);
    g1.push_back(3);
    g1.push_back(4);
    g1.push_back(5);
    
    vector<int> ans = twoSum(g1, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}