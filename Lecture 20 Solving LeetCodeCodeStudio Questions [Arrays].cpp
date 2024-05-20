// REVERSE THE WHOLE ARRAY
// #include <iostream>
// #include <vector>>
// using namespace std;
// vector<int> reverse(vector<int> v){
//   int s = 0, e = v.size()-1;
//   while(s<=e){
//     swap(v[s], v[e]);
//     s++;
//     e--;
//   }
//   return v;
// }
// void print(vector<int> v){
//   for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
//   }
//   cout<<endl;
// }
// int main(){
//   vector<int> v;
//   v.push_back(11);
//   v.push_back(7);
//   v.push_back(3);
//   v.push_back(12);
//   v.push_back(4);
//   vector<int> ans = reverse(v);

//   cout<<"Printing reverse array"<<endl;
//   print(ans);
//   return 0;
// }

// REVERSE THE ARRAY from any index to any index
// #include <iostream>
// #include <vector>
// using namespace std;
// void reverseAraay(vector<int> &arr, int m){
//   int s = m+1, e = arr.size()-1;
//   while(s<=e){
//     swap(arr[s], arr[e]);
//     s++;
//     e--;
//   } 
// }

// MERGE SORTED ARRAYS
// #include <iostream>
// #include <vector>
// using namespace std;
// void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
//   int i=0, j=0;
//   int k=0;
//   while(i<n && j<m){
//     if(arr1[i]<arr2[j]){
//       arr3[k] = arr1[i];
//       k++;
//       i++;
//     }
//     else{
//       arr3[k] = arr2[j];
//       k++;
//       j++;
//     }
//   }
//   while(i<n){
//     arr3[k] = arr1[i];
//     k++;
//     i++;
//   }
//   while(j<m){
//     arr3[k] = arr2[j];
//     k++;
//     j++;
//   }
// }

// void print(int ans[], int n){
//   for(int i=0; i<n; i++){
//     cout<<ans[i]<<" ";
//   }
//   cout<<endl;
// }
// int main(){
//   int arr1[5]={1,3,5,7,9};
//   int arr2[3]={2,4,6};
//   int arr3[8] = {0};
//   merge(arr1, 5, arr2, 3, arr3);
//   print(arr3, 8);
// } 

// MOVE ZEROS TO THE END
// #include <iostream>
// #include <vector>>
// using namespace std;
// void moveZeroes(vector<int> &nums){
//   int i=0;
//   for(int j=0; j<nums.size(); j++){
//     if(nums[j]!=0);
//     swap(nums[j], nums[i]);  
//     i++;
//   }
// }