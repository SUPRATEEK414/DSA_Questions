// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   //creation of 2D array
//   int** arr = new int*[n];
//   for(int i=0; i<n; i++){
//     arr[i] = new int[n];
//   }
//   //taking input
//   for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//       cin>>arr[i][j];
//     }
//   }
//   //taking output
//   cout<<endl;
//   for(int i=0; i<n; i++){
//     for(int j=0; j<n; j++){
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int row;
//   cin>>row;
//   int col;
//   cin>>col;
//   //creation of 2D array
//   int** arr = new int*[row];
//   for(int i=0; i<row; i++){
//     arr[i] = new int[col];
//   }
//   for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//       cin>>arr[i][j];
//     }
//   }
//   cout<<endl;
//   for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
//   //releasing memory
//   for(int i=0; i<row; i++){
//     delete [] arr[i];
//   }
//   //how to create 2D array dynamically
//   //input/output
//   //memory free kaise karni hai
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int row1[] = {1,2,3};
//   int row2[] = {4,5,6};
//   int row3[] = {7,8,9};
//   int* jagged[] = {row1, row2, row3};
//   int sizes[] = {4,2,3};
//   cout<<"elements in matrix form as follows"<<endl;
//   for(int i=0; i<3; i++){
//     int* ptr = jagged[i];
//     for(int j=0; j<sizes[i]; j++){
//       cout<<*(ptr+j)<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }