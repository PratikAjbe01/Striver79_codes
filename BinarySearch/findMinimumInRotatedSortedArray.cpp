#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int>& a, int key) {
         int l=0;
        int n=a.size();
        int h=n-1;
        int ans=INT_MAX;
        
        while(l<=h){
            int m=l+(h-l)/2;
          
            if(a[l]<=a[m]){
                  ans=min(ans,a[l]);
                l=m+1;
            }else{
                  ans=min(ans,a[m]);
                h=m-1;
            }
        }
        return ans;
    }
int main(){
    vector<int>arr={3,3,3,3,3,3,4,1,1,2,3};
   cout<<findMin(arr,2);

return 0;
}