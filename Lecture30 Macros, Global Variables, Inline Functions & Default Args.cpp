// #include <iostream>
// using namespace std;
// #define PI 3.14
// int main(){
//   int r=5;
//   double area = PI*r*r;
//   cout<<"Area of circle is: "<<area<<endl;
//   return 0;
// }

// //Global Variables
// #include <iostream>
// using namespace std;
// int score  = 15;
// void a(int& i){
//   cout<<score<<" in a "<<endl;
//   //char ch = 'a';
//   cout<<i<<endl;
//   //b(i);
// }
// void b(int& i){
//   cout<<score<<" in b "<<endl;
//   cout<<i<<endl;
// }
// int main(){
//   cout<<score<<" in main "<<endl;
//   int i=5;
//   a(i);
//   b(i);
//   //a(i);
//   // {
//   //   int i=2;
//   //   cout<<i<<endl;
//   // }
//   // cout<<i<<endl;
//   return 0; 
// }

//Inline functions are used to reduce the function call overhead.
// #include <iostream>
// using namespace std;
// void func(int a, int b){
//   a++;
//   b++;
//   cout<<a<<b<<endl;
// }
// int main(){
//   int a=1, b=2;
//   func(a,b);
//   return 0;
// }

// #include <iostream>
// using namespace std;
// inline int getMax(int& a, int& b){
//   return (a>b)?a:b;
// }
// int main(){
//   int a=1, b=2;
//   int ans = 0;
//   // if(a>b){
//   //   ans = a;
//   // }
//   // else{
//   //   ans = b;
//   // } 
//   ans = getMax(a,b);
//   a=a+3;
//   b=b+1;
//   ans = getMax(a,b);
//   return 0;
// }

// //Default arguments
// #include <iostream>
// #include <array>
// using namespace std;

// void print(int arr[], int n, int start=0){
//   for(int i=start; i<n; i++){
//     cout<<arr[i]<<endl;
//   }
// }
// int main(){
//   int arr[5] = {1,4,7,8,9};
//   int size = 5;
//   print(arr, size);
//   print(arr, size, 2);
//   return 0;
// }