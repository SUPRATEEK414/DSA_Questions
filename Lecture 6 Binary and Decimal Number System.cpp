// #include <iostream>
// #include <math.h>
// using namespace std;
// int main() {
//   int n;
//   cin>>n;
//   int ans=0;
//   int i=0;
//   while(n!=0){
//     int bit = n&1;
//     ans=(bit * pow(10, i))+ans;
//     n=n>>1;
//     i++;
//   }
//   cout<<"Answer is "<<ans<<endl;
// }

// #include <iostream>
// #include <bitset>
// #include <string>

// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a negative number: ";
//     cin >> num;

//     string binary = ""; // Initialize binary string

//     if (num == 0) {
//         binary = "0";
//     } else {
//         while (num != 0) {
//             binary = (num & 1 ? '1' : '0') + binary;
//             num >>= 1;
//         }
//     }

//     cout << "Binary representation of " << num << " is: " << binary << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main() {
//   int n;
//   cin>>n;
//   int ans=0, i=0;
//   while(n!=0){
//       int digit = n%10;
//       if(digit==1){
//           ans = ans + pow(2,i);  
//       }
//       n=n/10;
//       i++;
//   }
//   cout<<"Answer is "<<ans<<endl;
// }



