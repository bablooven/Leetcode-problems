#include "header_files/logPairs.h"

#include <iostream>

using namespace std;

//Given an array as an input, find the number of pairs which can be made from their elements and print them.
int logPairs(int arr[], int n) 
{
  cout << "Inside logPairs function!\n";
  int i=0; int j=i+1;
  
  while(true){
    cout<<arr[i]<<','<<arr[j]<<' ';
    j++;
    if(j==n)
       {
         i++;
         j=i+1;
         cout<<endl;
         
         /*for(int x=i;x>0;x--)
         cout<<' '<<' '<<' '<<' ';*/ //For proper formating but increases the time complexity to O(n^2) in worst case.
       }
       if(i==n-1)
          break;
  }
  
  return 0;
} 