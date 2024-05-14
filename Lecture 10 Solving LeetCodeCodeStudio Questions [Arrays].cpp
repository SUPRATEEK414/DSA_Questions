// #include <iostream>
// using namespace std;
// void printArray(int arr[], int size){
//   for(int i=0; i<size; i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
// }
// void swapAlternate(int arr[], int size){
//   for(int i=0; i<size; i+=2){
//     if(i+1<size){
//       swap(arr[i], arr[i+1]);
//     }
//   }
// }
// int main(){
//   int even[8] = {5,2,4,6,8,10,12,14};
//   int odd[5] = {1,3,5,7,9};
//   swapAlternate(even, 8);
//   printArray(even, 8);
//   cout<<endl;
//   swapAlternate(odd, 5);
//   printArray(odd, 5);
// }

// #include <iostream>
// using namespace std;
// int findUnique(int arr[], int size){
//   int ans = 0;
//   for(int i=0; i<size; i++){
//     ans = ans^arr[i];
//   }
//   return ans;
// }

// #include <vector>
// #include <unordered_map>
// #include <unordered_set>

// class Solution {
// public:
//     bool uniqueOccurrences(std::vector<int>& arr) {
//         std::unordered_map<int, int> occurrenceCount;
//         for (int num : arr) {
//             occurrenceCount[num]++;
//         }

//         std::unordered_set<int> uniqueCounts;
//         for (const auto& pair : occurrenceCount) {
//             if (uniqueCounts.count(pair.second) > 0) {
//                 return false; // If count is not unique, return false
//             }
//             uniqueCounts.insert(pair.second);
//         }

//         return true; // All counts are unique
//     }
// };

// find duplicates in an array
// #include <iostream>
// #include <vector>
// using namespace std;
// int findDuplicate(vector<int> &arr){
//   int ans=0;
//   for(int i=0; i<arr.size(); i++){
//     ans = ans^arr[i];
//   }
//   for(int i=1; i<arr.size(); i++){
//     ans = ans^i;
//   }
//   return ans;
// }

// finding all the duplicates present in the array
// #include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// vector<int> findDuplicates(vector<int> &arr) {
//     vector<int> duplicates;
//     unordered_map<int, int> freqMap;

//     // Count frequencies of elements in the array
//     for (int num : arr) {
//         freqMap[num]++;
//     }

//     // Check for duplicates
//     for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
//         if (it->second > 1) {
//             duplicates.push_back(it->first);
//         }
//     }

//     return duplicates;
// }

// int main() {
//     vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};

//     vector<int> duplicates = findDuplicates(arr);

//     if (duplicates.empty()) {
//         cout << "No duplicates found." << endl;
//     } else {
//         cout << "Duplicates found: ";
//         for (int num : duplicates) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Intersection of two arrays
// #include <bits/stdc++.h> 
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//   int i=0, j=0;
//   vector<int> ans;
//   while(i<n && j<m){
//     if(arr1[i]==arr2[j]){
//       ans.push_back(arr1[i]);
//       i++;
//       j++;
//     }
//     else if(arr1[i]<arr2[j]){
//       i++;
//     }
//     else{
//       j++;
//     }
//   }
// }

// Pair Sum
// #include <bits/stdc++.h>
// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    vector<vector<int>> ans;
//    for(int i=0; i<arr.size(); i++){
//      for(int j=i+1; j<arr.size(); j++){
//        if(arr[i]+arr[j]==s){
//          vector<int> temp;
//          temp.push_back(min(arr[i], arr[j]));
//          temp.push_back(max(arr[i], arr[j]));
//          ans.push_back(temp);
//        }
//      }
//    }
//   sort(ans.begin(), ans.end());
//   return ans;
// }

// Triplet Sum
// #include <bits/stdc++.h> 
// vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
//     sort(arr.begin(),arr.end());
//      vector<vector<int>>ans;
//     set<vector<int>> s;
//     for(int i=0;i<n;i++){
//         int sum = K - arr[i];
//         int j = i+1;
//         int k = n-1;
//         while(j<k){
//                 if(arr[j]+arr[k] == sum){
//                     vector<int> temp;
//                     temp.push_back(arr[i]);
//                     temp.push_back(arr[j]);
//                     temp.push_back(arr[k]);
//                     sort(temp.begin(),temp.end());
//                     s.insert(temp);
//                     j++;
//                 }
//             else if(arr[j]+arr[k]<sum){
//                 j++;
//             }
//             else{
//                 k--;
//             }
//     }
//     }
//     for(auto val: s){
//         ans.push_back(val);
//     }
//     return ans;
// }

// Sort 0's and 1's
// void sort012(int *arr, int n)
// {
//     int l = 0;
//     int r = n-1;
//     int m = 0;
//     while(m<=r){
//         switch(arr[m]){
//             case 0: swap(arr[l++],arr[m++]);
//                     break;
//             case 1: m++;
//                     break;
//             case 2: swap(arr[m],arr[r--]);
//         }
//     }
// }