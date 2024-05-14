// First and Last occurence of Key in a sorted array
// #include <iostream>
// #include <vector>
// using namespace std;

// int firstOcc(vector<int>& arr, int n, int key) {
//     int s = 0, e = n - 1;
//     int ans = -1;
//     while (s <= e) {
//         int mid = s + (e - s) / 2;
//         if (arr[mid] == key) {
//             ans = mid;
//             e = mid - 1; // Continue searching in the left half
//         } else if (key > arr[mid]) {
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// int secOcc(vector<int>& arr, int n, int key) {
//     int s = 0, e = n - 1;
//     int ans = -1;
//     while (s <= e) {
//         int mid = s + (e - s) / 2;
//         if (arr[mid] == key) {
//             ans = mid;
//             s = mid + 1; // Continue searching in the right half
//         } else if (key > arr[mid]) {
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int key) {
//     pair<int, int> p;
//     p.first = firstOcc(arr, n, key);
//     p.second = secOcc(arr, n, key);
//     return p;
// }

// Find total occurences of a key in a sorted array
// #include <iostream>
// #include <vector>
// using namespace std;

// int firstOcc(vector<int>& arr, int n, int key) {
//     int s = 0, e = n - 1;
//     int ans = -1;
//     while (s <= e) {
//         int mid = s + (e - s) / 2;
//         if (arr[mid] == key) {
//             ans = mid;
//             e = mid - 1; // Continue searching in the left half
//         } else if (key > arr[mid]) {
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// int secOcc(vector<int>& arr, int n, int key) {
//     int s = 0, e = n - 1;
//     int ans = -1;
//     while (s <= e) {
//         int mid = s + (e - s) / 2;
//         if (arr[mid] == key) {
//             ans = mid;
//             s = mid + 1; // Continue searching in the right half
//         } else if (key > arr[mid]) {
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//     }
//     return ans;
// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int key) {
//     pair<int, int> p;
//     p.first = firstOcc(arr, n, key);
//     p.second = secOcc(arr, n, key);
//     return p;
// }

// int totalOccurrences(vector<int>& arr, int n, int key) {
//     pair<int, int> positions = firstAndLastPosition(arr, n, key);
//     if (positions.first == -1 || positions.second == -1) {
//         return 0; // Key not found in the array
//     }
//     return positions.second - positions.first + 1;
// }

// Peak Index in a Mountain Array
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//       int s = 0, e = arr.size() - 1;
//       int mid = s + (e - s) / 2;
//       while (s < e) {
//         if (arr[mid] < arr[mid + 1]){
//           s = mid + 1;
//         }
//         else{
//           e = mid;
//         }
//         mid = s + (e - s) / 2;
//         }
//         return s; // or return right since e == s at the end
//     }
// };
