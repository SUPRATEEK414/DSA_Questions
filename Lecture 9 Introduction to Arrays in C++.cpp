// #include <iostream>
// using namespace std;
// void printArray(int arr[], int size){
//   cout<<"printing the array"<<endl;
//   for(int i=0; i<size; i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<"printing done"<<endl;
// }
// int main(){
  // int number[21];
  // cout<<"value at 14 index"<<number[14]<<endl;
  // cout<<"value at 20 index"<<number[20]<<endl;
//   int second[3]={5,7,11};
//   cout<<"value at 2nd index "<<second[2]<<endl;
//   int third[15]={2,7};
//   int n=15;
//   printArray(third, 15);
//   int fourth[10]={0};
//   n=10;
//   printArray(fourth, 15);
//   int fifth[10]={1};
//   printArray(fifth, 15);
//   cout<<"everything is fine"<<endl;
//   return 0;
// } 

// #include <iostream>
// #include <climits> // Include the climits header
// using namespace std;

// int getMin(int num[], int n){
//   int maxi= INT_MAX;
//   for(int i=0; i<n; i++){
//     maxi = max(maxi, num[i]);
//     // if(num[i]<min){
//     //   min=num[i];
//     // }
//   }
//   return maxi;
// }
// int getMax(int num[], int n){
//   int mini= INT_MIN; // Corrected line
//   for(int i=0; i<n; i++){
//     mini = max(mini, num[i]);
//     // if(num[i]>mini){
//     //   mini=num[i];
//     // }
//   }
//   return  mini;
// }
// int main(){
//   int size;
//   cin>>size;
//   int num[100];
//   for(int i=0; i<size; i++){
//     cin>>num[i];
//   }
//   cout<<"maximum value is "<<getMax(num, size)<<endl; 
//   cout<<"minimum value is "<<getMin(num, size)<<endl;
// }

// #include <iostream>
// using namespace std;
// bool search(int arr[], int size, int key){
//   for(int i=0; i<size; i++){
//     if(arr[i]==key){
//       return 1;
//     }
//   }
//   return 0;
// }
// int main(){
//   int arr[10]={5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
//   //whether 1 is present in it or not?
//   cout<<"enter the key to search for"<<endl;
//   int key;
//   cin>>key;
//   bool found = search(arr, 10, key);
//   if(found){
//     cout<<"key is present"<<endl;
//   }
//   else{
//     cout<<"key is absent"<<endl;
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// void reverse(int arr[], int n){
//   int start=0;
//   int end=n-1;
//   while(start<=end){
//     swap(arr[start], arr[end]);
//     start++;
//     end--;
//   }
// }
// void printArray(int arr[], int n){
//   for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
// }
// int main(){
//   int arr[6]={1, 4, 0, 5, -2, 15};
//   int brr[5]={2, 6, 3, 9, 4};
//   reverse(arr, 6);
//   reverse(brr, 5);
//   printArray(arr, 6);
//   printArray(brr, 5);
//   return 0;
// }