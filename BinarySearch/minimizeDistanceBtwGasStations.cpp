#include <bits/stdc++.h>
using namespace std;
 bool isPossible(double D, vector<int>&arr,
                int N, int K)
        {
    // Stores the count of point used
    int used = 0;

    // Iterate over all given points
    for (int i = 0; i < N - 1; ++i) {

        // Add number of points required
        // to be placed between ith
        // and (i+1)th point
        used += (int)((arr[i + 1]
                       - arr[i])
                      / D);
    }

    // Return answer
    return used <= K;
       }
    double findSmallestMaxDist(vector<int> &stations, int K) {
        double low = 0, high = 1e8;
   int N=stations.size();
    // Perform binary search
    while (high - low > 1e-6) {

        // Find the middle value
        double mid = (low + high) / 2.0;

        if (isPossible(mid,stations, N, K)) {

            // Update the current range
            // to lower half
            high = mid;
        }

        // Update the current range
        // to upper half
        else {
            low = mid;
        }
    }

    return low; 
        
    }
int main(){
     vector<int>a={1,2,3,4,5,6,7,8,9,10};

     double ans=findSmallestMaxDist(a,9);
     cout<<ans;
    return 0;
}