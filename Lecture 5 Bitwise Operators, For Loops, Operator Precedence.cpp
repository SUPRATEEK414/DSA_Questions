// #include <iostream>
// using namespace std;
// // int main() {
// //   int a = 4;
// //   int b = 6;
// //   cout<<" a&b "<< (a&b) << endl;
// //   cout<<" a|b "<<(a|b)<<endl;
// //   cout<<" ~a "<<~a<<endl;
// //   cout<<" a^b "<<(a^b)<<endl;  


// //   cout<<(17>>1)<<endl;
// //   cout<<(17>>2)<<endl;
// //   cout<<(19<<1)<<endl;
// //   cout<<(21<<2)<<endl;

// //   int i = 7;
// //   cout<<(++i)<<endl;
// //   cout<<(i++)<<endl;
// //   cout<<(i--)<<endl;
// //   cout<<(--i)<<endl;
// // }


// // Question 1
// // int main() {
// //   int a, b = 1;
// //   a = 10;
// //   if(++a)
// //     cout<<b;
// //   else
// //     cout<<++b;
// // }

// // Question 2
// // int main() {
// //   int a = 1;
// //   int b = 2;

// //   if(a-- > 0 && ++b > 2){
// //     cout<<"stage 1 - inside if"<<endl;
// //   }else{
// //     cout<<"stage - 2 inside else"<<endl;
// //   }
// //     cout<< a <<" "<< b <<endl;
  
// // }

// //Question 3
// // int main() {
// //   int number = 3;
// //   cout<<(25*(++number));
// // 

// //Question 4
// // int main() {
// //   int a = 1;
// //   int b = a++;
// //   int c = b++;
// //   cout<<b<<endl;
// //   cout<<c<<endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;
//   cout<<"printing count from 1 to n"<<endl;
//   for(int i = 1; i<=n; i++){
//     cout<<i<<endl;
//   }
// }

// #include <iostream>
// using namespace std;
// int main(){
//   for(int a=0, b=1, c=2; a>=0 && b>=1 && c>=2; a--, b--, c--){
//     cout<<a<<" "<<b<<" "<<c<<endl;
//   }
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;
//   int sum = 0;
  
//   for(int i = 1; i<=n; i++){
//     sum=sum+i;
//   }
//   cout<<"sum from 1 to n: "<<sum<<endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int n=10;
//   int a=0;
//   int b=1;
//   cout<<a<<endl<<b<<endl;
//   for(int i=1; i<=n; i++){
//     int nextNumber = a+b;
//     cout<<nextNumber<<endl;
//     a=b;
//     b=nextNumber;
    
//   }
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   bool isPrime = 0;
//   for(int i=2; i<n; i++){
//     if(n%i==0){
//       cout<<"Is not Prime Number for "<<i<<endl;
//       isPrime=0;
//       break;
//     }
//   }
//   if(isPrime==0){
//     cout<<"NOT a prime number"<<endl;
//   }else{
//     cout<<"Is a prime number"<<endl; 
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   for(int i=0; i<5; i++){
//     cout<<"HI"<<endl;
//     cout<<"HEY"<<endl;
//     continue;
//     cout<<"Reply toh karde"<<endl;
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   for(int i=0; i<=5; i++){
//     cout<<i<<" ";
//     i++;
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   for(int i=0; i<=5; i--){
//     cout<<i<<" ";
//     i++;
//   }
// } 

// #include <iostream>
// using namespace std;
// int main() {
//   for(int i=0; i<=15; i+=2){
//     cout<<i<<" ";
//     if(i&1){
//       continue;
//     }
//     i++;
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   for(int i=0; i<=5; i++){
//     for(int j=i; j<=5;j++){
//       cout<<i<<" "<<j<<endl;
//     }
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   for(int i=0; i<=5; i++){
//     for(int j=i; j<=5;j++){
//       if(i+j==10){
//         break;
//       }
//       cout<<i<<" "<<j<<endl;
//     }
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int a=3;
//   cout<<a<<endl;
//   if(true){
//     int a=5;
//     cout<<a<<endl;
//   }
// }

// LEETCODE PROBLEM 1281
// #include <iostream>
// using namespace std;
// class solution{
// public: 
//     int subtractProductAndSum(int n){
//       int product = 1;
//       int sum = 0;
//       while(n!=0){
//         int digit = n%10;
//         product = product*digit;
//         sum = sum+digit;
//         n = n/10;
//       }
//       int answer = product - sum;
//       return answer;
//     }
// };

// LEETCODE PROBLEM 191
// class Solution {
// public:
//     int hammingWeight(int n) {
//         int count=0;
//         while(n!=0){
//             if(n&1){
//                 count++;
//             }
//             n=n>>1;
//         }
//         return count;
//     }
// };