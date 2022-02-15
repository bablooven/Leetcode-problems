// UnorderedSet

#include <iostream> //For C++
#include <stdio.h>  //For C
#include<unordered_set>


using namespace std;


int main()
{  
    unordered_set<int> s;
    s.insert(5);
    s.insert(10);
    
    if(s.find(5)==s.end())
    {
        cout<<"Not found"<<endl;

    }
    else cout<<"Found"<<endl;
    
    //Some more functions
    /*
    cout<<s.count(10)<<endl;  //Returns the count of a key (0 for not found and 1 for found)
    s.erase(10);              //Erase
    s.erase(s.begin(), s.end()) //Erase all except the element in place of s.end()->(s.end() is excluded)
    */
    
    //auto keyword: The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer. In the case of functions, if their return type is auto then that will be evaluated by return type expression at runtime. Good use of auto is to avoid long initializations when creating iterators for containers. 
    for(auto it = s.begin();it!=s.end();it++)   //begin-->unordered_set-->end
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    s.clear();  //Clears the unordered_set

    cout<<s.size()<<endl;
    return 0;
}