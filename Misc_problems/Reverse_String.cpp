#include <iostream> //For C++
#include <stdio.h>  //For C
#include<string>

using namespace std;
//using std::string;

string reverseString(string str)
{
    //string str = "Hello darkness my old friend!";
    for(int i=0; i<str.length()/2; i++)
    {
         char temp=str[i];
         str[i]=str[str.length()-1-i];
         str[str.length()-1-i]=temp;

    }
    std::cout<<"The reverse of the given string is : "<<str;
    return str;
}