 #include <bits/stdc++.h>
using namespace std;
 bool hasTripletSum(vector<int> &arr, int target) {
       int n=arr.size();
       sort(arr.begin(),arr.end());
       for(int i=0;i<n-2;i++){
           int low=i+1;
           int high=n-1;
           int nT=target-arr[i];
           while(low<high){
               if(arr[low]+arr[high]==nT)return true;
               else if(arr[low]+arr[high]>nT)high--;
               else low++;
           }
       }
        return false;
    }