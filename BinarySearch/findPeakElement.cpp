#include <bits/stdc++.h>
using namespace std;
int findPeak(vector<int>& arr) {
       int n=arr.size();
      if(n==1)return 0;
      if(arr[0]>arr[1])return 0;
      if(arr[n-1]>arr[n-2])return n-1;
      int low=0;
      int high=n-1;
      while(low<=high){
          int mid=low+(high-low)/2;
          int left=(mid-1>=0)?arr[mid-1]:INT_MIN;
          int right=(mid+1<n)?arr[mid+1]:INT_MAX;
          cout<<"dekh left kya hai "<<left<<endl;
          cout<<"dekh right kya hai "<<right<<endl;
          if(arr[mid]>left&&arr[mid]>right){
              return mid;
          }else if(left>right){
              high=mid-1;
          }
          else{
              low=mid+1;
          }
      }
        return 0;
    }
int main(){
    vector<int>arr={8,9,0};
   cout<<findPeak(arr);

return 0;
}