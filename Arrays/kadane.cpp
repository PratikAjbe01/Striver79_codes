#include <bits/stdc++.h>
using namespace std;
 int maxSubarraySum(vector<int> &arr) {
      int n=arr.size();
      int sum=0;
      int maxi=INT_MIN;
      for(int i=0;i<n;i++){
          sum+=arr[i];
          maxi=max(maxi,sum);
          if(sum<0){
              sum=0;
          }
      }
     
       return maxi; 
    }
int main(){
    vector<int>vcc={3, 2 ,1,-1 ,3 ,4 ,5 ,6};
   int ans=  maxSubarraySum(vcc);
cout<<"the max subarray sum is "<<ans<<endl;
    return 0;
}