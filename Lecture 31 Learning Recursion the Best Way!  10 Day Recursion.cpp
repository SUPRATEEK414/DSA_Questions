// #include <iostream>
// using namespace std;
// int factorial(int n){
//   if(n==0)
//     return 1;
//   int smallerProblem = factorial(n-1);
//   return n*smallerProblem;
// }
// int main(){
//   int n;
//   cin>>n;
//   int ans = factorial(n);
//   cout<<ans<<endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int power(int n){
//   if(n==0)
//     return 1;
//   int smallerProblem = power(n-1);
//   return 2*smallerProblem;
// }
// int main(){
//   int n;
//   cin>>n;
//   int ans = power(n);
//   cout<<ans<<endl;
// }

// #include <iostream>
// using namespace std;
// int print(int n){
//   if(n==0){
//     return 0;
//   }    
//   cout<<n<<endl;
//   print(n-1);
//   return 0;
// }
// int main(){
//   int n;
//   cin>>n;
//   cout<<endl;
//   print(n);
//   return 0;
// }