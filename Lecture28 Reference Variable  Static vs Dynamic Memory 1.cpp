// #include <iostream>
// using namespace std; 
// // This is a bad practice
// // int& func(int a){
// //   int num = a;
// //   int& ans = num;
// //   return ans;
// // }
// // int* fun(int n){
// //   int *ptr = &n;
// //   return ptr;
// // }
// void update(int& n){
//   n++;
// }
// int main(){
//   // int i=5;
//   // //create a refernce variable
//   // int& j = i;
//   // cout<<i<<endl;
//   // i++;
//   // cout<<i<<endl;
//   // j++;
//   // cout<<j<<endl;
//   // cout<<i<<endl;
//   int n=5;
//   cout<<"before "<<n<<endl;
//   update(n);
//   cout<<"after "<<n<<endl;
//   // fun(n);
//   // func(n);
//   return 0;
// }

// #include <iostream>
// using namespace std; 
// int main(){
//   char ch = 'q';
//   cout<<sizeof(ch)<<endl;

//   char* c = &ch;
//   cout<<sizeof(c)<<endl;

//   return 0;
  
// }

// #include <iostream>
// #include <array>
// using namespace std; 
// int getSum(int *arr, int n){
//   int sum = 0;
//   for(int i=0; i<n; i++){
//     sum += arr[i];
//   }
//   return sum;
// }
// int main(){
//   int n;
//   cin>>n;
//   int* arr = new int[n];
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
//   int ans = getSum(arr,n);
//   cout<<"ans is "<<ans<<endl;
//   delete[] arr;

//   while(true){
//     int n = 5;
//   }

//   while(true){
//     int* ptr = new int;
//   }
//   return 0;
// }