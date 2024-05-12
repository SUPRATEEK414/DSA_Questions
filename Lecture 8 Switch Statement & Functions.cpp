// #include <iostream>
// using namespace std;
// int main(){
//   int num =2;
//   switch(num){
//     case 1: cout<<"First"<<endl;
//       break;
//     case 2: cout<<"Second"<<endl;
//       break;
//     default: cout<<"It is default case"<<endl;
//   }
//   cout<<endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int a,b;
//   cout<<"Enter the value of a"<<endl;
//   cin>>a;
//   cout<<"Enter the value of b"<<endl;
//   cin>>b;
//   char op;
//   cout<<"Enter the operation you want to perform"<<endl;  
//   cin>>op;
//   switch(op){
//     case '+': cout<<(a+b)<<endl;
//       break;
//     case '-': cout<<(a-b)<<endl;
//       break;
//     case '*': cout<<(a*b)<<endl;
//       break;
//     case '/': cout<<(a/b)<<endl;
//       break;
//     case '%': cout<<(a%b)<<endl;
//       break;
//     default: cout<<"Please enter a valid operation"<<endl;
    
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n1 = 0, n2 = 0, n5 = 0, n10 = 0, n20 = 0, n50 = 0, n100 = 0, n500 = 0;
//     int amount;
//     cin >> amount;

//     // Loop through each denomination
//     while (amount > 0) {
//         if (amount >= 500) {
//             n500 = amount / 500;
//             amount -= n500 * 500;
//         } else if (amount >= 100) {
//             n100 = amount / 100;
//             amount -= n100 * 100;
//         } else if (amount >= 50) {
//             n50 = amount / 50;
//             amount -= n50 * 50;
//         } else if (amount >= 20) {
//             n20 = amount / 20;
//             amount -= n20 * 20;
//         } else if (amount >= 10) {
//             n10 = amount / 10;
//             amount -= n10 * 10;
//         } else if (amount >= 5) {
//             n5 = amount / 5;
//             amount -= n5 * 5;
//         } else if (amount >= 2) {
//             n2 = amount / 2;
//             amount -= n2 * 2;
//         } else {
//             n1 = amount;
//             amount = 0; // Break the loop
//         }
//     }

//     cout << "500 = " << n500 << endl;
//     cout << "100 = " << n100 << endl;
//     cout << "50 = " << n50 << endl;
//     cout << "20 = " << n20 << endl;
//     cout << "10 = " << n10 << endl;
//     cout << "5 = " << n5 << endl;
//     cout << "2 = " << n2 << endl;
//     cout << "1 = " << n1 << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n1 = 0, n20 = 0, n50 = 0, n100 = 0;
//     int amount;
//     cin >> amount;

//     // Loop through each denomination
//     while (amount > 0) {
//         if (amount >= 100) {
//             n100 = amount / 100;
//             amount -= n100 * 100;
//         } else if (amount >= 50) {
//             n50 = amount / 50;
//             amount -= n50 * 50;
//         } else if (amount >= 20) {
//             n20 = amount / 20;
//             amount -= n20 * 20;
//         } else {
//             n1 = amount;
//             amount = 0; // Break the loop
//         }
//     }
//     cout << "100 = " << n100 << endl;
//     cout << "50 = " << n50 << endl;
//     cout << "20 = " << n20 << endl;
//     cout << "1 = " << n1 << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n1 = 0, n20 = 0, n50 = 0, n100 = 0;
//     int amount;
//     cin >> amount;

//     // Loop through each denomination
//     while (amount > 0) {
//         switch (amount >= 100 ? 1 : 0) {
//             case 1:
//                 n100 = amount / 100;
//                 amount -= n100 * 100;
//                 break;
//             default:
//                 switch (amount >= 50 ? 1 : 0) {
//                     case 1:
//                         n50 = amount / 50;
//                         amount -= n50 * 50;
//                         break;
//                     default:
//                         switch (amount >= 20 ? 1 : 0) {
//                             case 1:
//                                 n20 = amount / 20;
//                                 amount -= n20 * 20;
//                                 break;
//                             default:
//                                 n1 = amount;
//                                 amount = 0; // Break the loop
//                         }
//                 }
//         }
//     }

//     cout << "100 = " << n100 << endl;
//     cout << "50 = " << n50 << endl;
//     cout << "20 = " << n20 << endl;
//     cout << "1 = " << n1 << endl;

//     return 0;
// }

// FUNCTIONS
// #include <iostream>
// using namespace std;
// int power(int num1, int num2){
//   int ans=1;
//   for(int i = 1; i<=num2; i++){
//     ans=ans*num1;
//   }
//   return ans;
// }
// int main(){
//   int a,b;
//   cin>>a>>b;
//   int answer = power(a,b);
//   cout<<"answer is "<<answer<<endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// bool isEven(int a){
//   if(a&1){
//     return 0;
//   }
//   else{
//     return 1;
//   }
// }
// int main(){
//   int num;
//   cin>>num;
//   if(isEven(num)){
//     cout<<"Number is Even"<<endl;
//   }
//   else{
//     cout<<"Number is Odd"<<endl;
//   }
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int factorial(int n) {
//     int fact = 1;
//     for(int i = 1; i<=n; i++ ) {
//         fact = fact * i;
//     }
//     return fact;
// }
// int nCr(int n, int r) {
//     int num = factorial(n);
//     int denom = factorial(r) * factorial(n-r);
//     return num/denom;
// }
// int main( ) {
//     int n, r;
//     cin>> n >> r ;
//     cout <<" Answer is " << nCr(n,r) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void printCounting(int n){
//   for(int i = 1; i<=n; i++){
//     cout<<i<<" ";
//   }
// }
// int main(){
//   int n;
//   cin>>n;
//   printCounting(n);
//   return 0;
// }

// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//   for(int i = 2; i<n; i++){
//     if(n%i==0){
//       return 0;
//     }
//   }
//   return 1;
// }
// int main(){
//   int n;
//   cin>>n;
//   if(isPrime(n)){
//     cout<<"is a prime number"<<endl;
//   }
//   else{
//     cout<<"is not a prime number"<<endl;
//   }
// }

// #include<iostream>
// using namespace std;
// int AP(int n){
//   int ans = (3*n)+7;
//   return ans;
// }
// int main(){
//   int n;
//   cin>>n;
//   int ans = AP(n);
//   cout<<"Answer is "<<ans<<endl;
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int setBitsB(int b){
//   int count = 0;
//   while(b!=0){
//     if(b&1){
//       count++;
//     }
//     b = b>>1;
//   }
//   return count;
// }

// int setBitsA(int a){
//   int count = 0;
//   while(a!=0){
//     if(a&1){
//       count++;
//     }
//     a = a>>1;
//   }
//   return count;
// }
// int main(){
//   int a,b;
//   cin>>a>>b;
//   int ans1 = setBitsA(a);
//   int ans2 = setBitsB(b);
//   cout<<"Set bits of A is "<<ans1<<endl;
//   cout<<"Set bits of B is "<<ans2<<endl;
//   int ans = ans1+ans2;
//   cout<<"Total set bits are "<<ans<<endl;
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int fib(int n){
//   int a = 0;
//   int b = 1;
//   for(int i=2; i<n; i++){
//     int nextNumber = a+b;
//     a = b;
//     b = nextNumber;
//   }
//   return b;
// }

// int main(){
//   int n;
//   cin>>n;
//   cout<<"The "<<n<<"th term of the series is: "<<fib(n)<<endl;
//   return 0;
// }