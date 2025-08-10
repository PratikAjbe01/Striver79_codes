#include <bits/stdc++.h>
using namespace std;
 int calTime(vector<int>& arr,int mid ,int k){
        int cnt=0;
        for(int i=0;i<arr.size();i++){
           if(arr[i]<mid){
               cnt++;
           }
           else{
               if(arr[i]%mid==0)cnt+=arr[i]/mid;
               else cnt+=(arr[i]/mid)+1;
           }
        }
        if(cnt<=k)return true;
        return false;
    }
    int kokoEat(vector<int>& arr, int k) {
     int n=arr.size();
     int high=*max_element(arr.begin(),arr.end());
     int low=1;
     int maxi=-1;
     while(low<=high){
         int mid=low+(high-low)/2;
         bool ans=calTime(arr,mid,k);
         if(ans){
            maxi=mid;
             high=mid-1;
         }else{
             low=mid+1;
         }
     }
     return maxi;
    }
    int main(){
        vector<int>arr={3,4};
       cout<< kokoEat(arr,10);
        return 0;
    }