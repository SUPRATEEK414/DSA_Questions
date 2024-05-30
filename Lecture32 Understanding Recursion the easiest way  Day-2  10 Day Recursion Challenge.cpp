// #include <iostream>
// using namespace std;
// void reachHome(int src, int dest){
//   cout<<"source "<<src<<" destination "<<dest<<endl;
//   if(src==dest){
//     cout<<"Reached"<<endl;
//     return;
//   }
//   src++;
//   reachHome(src, dest);
// }
// int main() {
//   int dest = 10;
//   int src = 1;
//   cout<<endl;
//   reachHome(src, dest);
// }

// #include <iostream>
// using namespace std;
// class Solution{
//   public:
//   int fib(int n){
//     if (n==0)
//       return 0;
//     if(n==1)
//       return 1;

//     int ans = fib(n-1)+fib(n-2);
//     return ans;
//   }
// };

// #include <iostream>
// using namespace std;
// int countDistinctWays(long long nStairs){
//     //base case
//     if(nStairs<0)
//         return 0;
//     if(nStairs==0)
//         return 1;
//     int ans = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
//     return ans;
// }
// int main() {
//     long long nStairs;
//     cout << "Enter the number of stairs: ";
//     cin >> nStairs;
//     int ways = countDistinctWays(nStairs);
//     cout << "Number of ways to climb " << nStairs << " stairs: " << ways << endl;
//     return 0;
// }

// //Say Digits
// #include <iostream>
// using namespace std;
// void sayDigit(int n, string arr[]){
//   if(n==0)
//     return ;
//   int digit = n%10;
//   n=n/10;
  
//   sayDigit(n, arr);
//   cout<<arr[digit]<<" "<<endl;
// }
// int main(){
//   string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
//   int n;
//   cin>>n;
//   cout<<endl<<endl<<endl;
//   sayDigit(n, arr);
//   cout<<endl<<endl<<endl;
//   return 0;
// }