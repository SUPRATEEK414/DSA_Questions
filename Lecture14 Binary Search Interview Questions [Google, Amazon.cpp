// // Find pivot in an array
// // #include <iostream>
// // using namespace std;
// // int pivot(int arr[], int n){
// //   int s=0;
// //   int e=n-1;
// //   int mid=s+(e-s)/2;
// //   while(s<e){
// //     if(arr[mid]>=arr[0]){
// //       s=mid+1;
// //     }
// //     else{
// //       e=mid;
// //     }
// //     mid=s+(e-s)/2;
// //   }
// //   return s;
// // }
// // int main(){
// //   int arr[5]={7,9,1,2,3};
// //   cout<<"Pivot is "<<pivot(arr,5);
// // }

// //Search in a rotated sorted array
// #include<vector>
// using namespace std;

// int getPivot(vector<int>& arr, int n) {

//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<e) {

//         if(arr[mid] >= arr[0])
//         {
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int binarySearch(vector<int>& arr, int s, int e, int key) {

//     int start = s;
//     int end = e;

//     int mid = start + (end-start)/2;

//     while(start <= end) {

//         if(arr[mid] == key) {
//             return mid;
//         }

//         //go to right wala part
//         if(key > arr[mid]) {
//             start = mid + 1;
//         }
//         else{ //key < arr[mid]
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }

//     return -1;
// }



// int findPosition(vector<int>& arr, int n, int k)
// {
//     int pivot = getPivot(arr, n);
//     if( k >= arr[pivot] && k <= arr[n-1])
//     {//BS on second line
//         return binarySearch(arr, pivot, n-1, k);
//     }
//     else
//     {//BS on first line
//         return binarySearch(arr, 0, pivot - 1, k);
//     }

// }

// Square Root
// #include <iostream>
// using namespace std;
// long long int sqrtInteger(int n){
//     int s=0;
//     int e=n;
//     long long int mid=s+(e-s)/2;
//     long long int ans=-1;
//     while(s<=e){
//         long long int square=mid*mid;
//         if(square==n){
//             return mid;
//         }
//         if(square<n){
//             ans=mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// double morePrecision(int n, int precision, int tempSol){
//     double factor=1;
//     double ans=tempSol;
//     for(int i=0;i<precision;i++){
//         factor=factor/10;
//         for(double j=ans;j*j<n;j=j+factor){
//             ans=j;
//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the number "<<endl;
//     cin>>n;
//     int tempSol=sqrtInteger(n);
//     cout<<"Answer is "<<morePrecision(n,3,tempSol)<<endl;
//     return 0;
// }