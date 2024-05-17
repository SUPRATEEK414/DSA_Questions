// Book Allocation Problem
// #include <iostream>
// #include <vector>
// using namespace std;

// bool isPossible(vector<int> arr, int n, int m, int mid){
//   int student = 1;
//   int page = 0;
//   for(int i=0; i<n; i++){
//     if(page + arr[i] <= mid){
//       page += arr[i];  
//     }
//     else{
//       student++;
//       if(student > m || arr[i] > mid){
//         return false;
//       }
//       page = arr[i];
//     }
//   }
//   return true;
// }

// int allocateBooks(vector<int> arr, int n, int m){
//   int s=0;
//   int sum=0;
//   int ans = 1;
//   for(int i=0; i<=n; i++){
//     sum+=arr[i];
//   }
//   int e=sum;
//   int mid=s+(e-s)/2;
//   while(s<=e){
//     if(isPossible(arr,n,m,mid)){
//       ans=mid;
//       e=mid-1;
//     }
//     else{
//       s=mid+1;
//     }
//     mid=s+(e-s)/2;
//   }
//   return ans;
// }

// Painter Partition Problem
// #include <iostream>
// #include <vector>
// using namespace std;
// bool isPossible(vector<int> &boards, int k, int mid){
//   int painters =1 ;
//   int blocks = 0;
//   for(int i=0; i<boards.size(); i++){
//     if(blocks + boards[i] <= mid){
//       blocks += boards[i];
//     }
//     else{
//       painters++;
//       if(painters > k || boards[i] > mid){
//         return false;
//       }
//       blocks = boards[i];
//     }
//   }
//   return true;
// }

// int findlargestMinDistance(vector<int> &boards, int k){
//   int s=0;
//   int sum=0;
//   for(int i =0; i<boards.size(); i++){
//     sum+=boards[i];
//   }
//   int e=sum;
//   int ans = -1;
//   int mid=s+(e-s)/2;
//   while(s<=e){
//     if(isPossible(boards,k,mid)){
//       ans = mid;
//       e=mid-1;
//     }
//     else{
//       s=mid+1;
//     }
//     mid=s+(e-s)/2;
//   }
//   return ans;
// }

// Aggresive Cows
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// bool isPossible(vector<int> &stalls, int k, int mid){
//    int cowCounts =1;
//    int lastPos = stalls[0];
//   for(int i=0; i<stalls.size(); i++){
//     if(stalls[i]-lastPos >= mid){
//       cowCounts++;
//       if(cowCounts == k){
//         return true;
//       }
//       lastPos = stalls[i];
//     }
//   }
//   return false;
// }

// int aggressiveCows(vector<int> &stalls, int k){
//   sort(stalls.begin(), stalls.end());
//   int s=0;
//   int maxi =-1;
//   for(int i=0; i<stalls.size(); i++){
//     maxi = max(maxi, stalls[i]);
//   }
//   int e=maxi;
//   int ans = -1;
//   int mid=s+(e-s)/2;
//   while(s<=e){
//     if(isPossible(stalls,k,mid)){
//       ans = mid;
//       s=mid+1;
//     }
//     else{
//       e=mid-1;
//     }
//     mid=s+(e-s)/2;
//   }
//   return ans;
// }