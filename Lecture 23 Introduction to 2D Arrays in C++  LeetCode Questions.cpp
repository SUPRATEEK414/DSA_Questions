// #include <iostream>
// using namespace std;
// int main(){
//   int arr[3][4];
//   for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//       cin>>arr[i][j];
//     }
//   }
//   for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// #include <iostream>
// #include <climits>
// using namespace std;

// bool isPresent(int arr[][4], int target, int rows, int cols){
//     for(int row = 0; row < rows; row++){
//         for(int col = 0; col < cols; col++){
//             if(arr[row][col] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// // Function to print row-wise sum
// void printSum(int arr[][4], int rows, int cols){
//     cout << "Printing sum" << endl;
//     for(int row = 0; row < rows; row++){
//         int sum = 0;
//         for(int col = 0; col < cols; col++){
//             sum += arr[row][col];
//         }
//         cout << sum << " ";
//     }
//     cout << endl;
// }

// int largestRowSum(int arr[][4], int rows, int cols){
//     int maxi = INT_MIN;
//     int rowIndex = -1;
//     for(int row = 0; row < rows; row++){
//         int sum = 0;
//         for(int col = 0; col < cols; col++){
//             sum += arr[row][col];
//         }
//         if(sum > maxi){
//             maxi = sum;
//             rowIndex = row;
//         }
//     }
//     return rowIndex;
// }

// int main(){
//     const int rows = 3;
//     const int cols = 4;
//     int arr[rows][cols];

//     cout << "Enter the elements: " << endl;
//     for(int row = 0; row < rows; row++){
//         for(int col = 0; col < cols; col++){
//             cin >> arr[row][col];
//         }
//     }

//     cout << "Printing the array: " << endl;
//     for(int row = 0; row < rows; row++){
//         for(int col = 0; col < cols; col++){
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }

//     printSum(arr, rows, cols);

//     int ansIndex = largestRowSum(arr, rows, cols);
//     cout << "Max row is at index: " << ansIndex << endl;

//     return 0;
// }

// // Print like a wave
// #include <iostream>
// #include <climits>
// #include <vector>
// using namespace std;
// vector<int> wavePoint(vector<vector<int>> arr, int nRows, int mCols){
//   vector<int> ans;
//   for(int col = 0; col < mCols; col++){
//     if(col & 1){
//       for(int row = nRows - 1; row >= 0; row--){
        
//         ans.push_back(arr[row][col]);
//       }
//     }
//     else{
//       for(int row = 0; row < nRows; row++){
//         ans.push_back(arr[row][col]);
//       }
//     }
//   }
//   return ans;
// }

// // Spiral Print
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int> >& matrix) {


//         vector<int> ans;
//         int row = matrix.size();
//         int col = matrix[0].size();

//         int count = 0;
//         int total = row*col;

//         //index initialisation
//         int startingRow = 0;
//         int startingCol = 0;
//         int endingRow = row-1;
//         int endingCol = col-1;


//         while(count < total) {

//             //print starting row
//             for(int index = startingCol; count < total && index<=endingCol; index++) {
//                 ans.push_back(matrix[startingRow][index]);
//                 count++;
//             }
//             startingRow++;

//             //print ending column
//             for(int index = startingRow; count < total && index<=endingRow; index++) {
//                 ans.push_back(matrix[index][endingCol]);
//                 count++;
//             }
//             endingCol--;

//             //print ending row
//             for(int index = endingCol; count < total && index>=startingCol; index--) {
//                 ans.push_back(matrix[endingRow][index]);
//                 count++;
//             }
//             endingRow--;

//             //print starting column
//             for(int index = endingRow; count < total && index>=startingRow; index--) {
//                 ans.push_back(matrix[index][startingCol]);
//                 count++;
//             }
//             startingCol++;
//         } 
//         return ans;
//     }
// };

// // Search 2D matrix1
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int> >& matrix, int target) {

//         int row = matrix.size();
//         int col = matrix[0].size();

//         int start = 0;
//         int end  = row*col-1;

//         int mid = start + (end-start)/2;

//         while(start<=end) {

//             int element = matrix[mid/col][mid%col];

//             if(element == target) {
//                 return 1;
//             }

//             if(element < target) {
//                 start = mid+1;
//             }
//             else
//             {
//                 end = mid-1;
//             }
//              mid = start + (end-start)/2;    
//         }
//         return 0;
//     }
// };

// // Search 2D matrix2
// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int> >& matrix, int target) {

//         int row = matrix.size();
//         int col = matrix[0].size();

//         int rowIndex = 0;
//         int colIndex = col-1;

//         while(rowIndex < row && colIndex>=0 ) {
//             int element = matrix[rowIndex][colIndex];

//             if(element == target) {
//                 return 1;
//             }

//             if(element < target){
//                 rowIndex++;
//             }
//             else
//             {
//                 colIndex--;
//             }
//         }
//         return 0;
//     }
// };