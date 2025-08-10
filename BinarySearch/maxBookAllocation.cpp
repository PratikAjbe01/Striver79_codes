#include <bits/stdc++.h>
using namespace std;
int isPossible(vector<int> &arr,int k,int mid){
        int sCnt=1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]<=mid){
                sum+=arr[i];
            }else{
                sum=arr[i];
                sCnt++;
            }
        }
        return sCnt<=k;
        
    }
    int findPages(vector<int> &arr, int k) {
     int n=arr.size();
     if(k>n)return -1;
     int low=*max_element(arr.begin(),arr.end());
     int high=accumulate(arr.begin(),arr.end(),0);
     while(low<=high){
         int mid=low+(high-low)/2;
         if(isPossible(arr,k,mid)){
             high=mid-1;
          
         }else{
              low=mid+1;
         }
     }
        return low;
    }
    int main(){
    vector<int>arr={12,34,67,90};
   cout<<findPages(arr,2);

return 0;
}