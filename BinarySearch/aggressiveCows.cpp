#include <bits/stdc++.h>
using namespace std;
 int isPossible(vector<int>&stalls,int k,int mid){
      int  prev=stalls[0];
      int cnt=1;
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-prev>=mid){
                prev=stalls[i];
              cnt++;
            }
        }
        return cnt>=k;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
       int n=stalls.size();
       int low=1;
       sort(stalls.begin(),stalls.end());
       int high=stalls[n-1]-stalls[0];
       while(low<=high){
           int mid=low+(high-low)/2;
           if(isPossible(stalls,k,mid)){
              low=mid+1;
           }
           else{
             high=mid-1;
           }
       }
       return high;
    }
int main(){
    vector<int>arr={10,1,2,7,5};
   cout<<aggressiveCows(arr,3);

return 0;
}