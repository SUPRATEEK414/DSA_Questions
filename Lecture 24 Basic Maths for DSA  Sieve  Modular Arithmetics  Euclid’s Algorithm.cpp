// #include <iostream>
// using namespace std;
// class Solution{
// public:
//     bool isPrime(int n){
//       if(n<=1)
//         return false;
//       for(int i=2;i<n;i++){
//         if(n%i==0){
//           return false;
//         }
//       }
//       return true;
//     }
//     int countPrimes(int n){
//       int count = 0;
//       for(int i=2; i<n; i++){
//         if(isPrime(i))
//           count++;
//       }
//       return count;
//     }
// };

// // Seive of Eratosthenes
// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution{
// public:
//   int countPrimes(int n){
//     int cnt = 0;
//     vector<bool> prime(n+1, true);
//     prime[0]=prime[1]=false;
//     for(int i=2; i<n; i++){
//       if(prime[i])
//         cnt++;

//       for(int j=2*i; j<n; j=j+i){
//         prime[j]=0;
//       }
//     }
//     return cnt;
//   }
// };

// // GCD/HCF
// #include <iostream>
// #include <vector>
// using namespace std;
// int gcd(int a, int b){
//   if(a==0)
//     return b;
//   if(b==0)
//     return a;
//   while(a!=b){
//     if(a>b)
//       a=a-b;
//     else
//       b=b-a;
//   }
//   return a;
// }
// int main(){
//   int a,b;
//   cout<<"Enter the values of a and b"<<endl;
//   cin>>a>>b;

//   int ans = gcd(a,b);
//   cout<<" The GCD of "<<a<<" and "<<b<<" is "<<ans<<endl;
//   return 0;
// }

// // Modulo arithmetics(fast exponentiation)
// #include <iostream>
// #include <vector>
// using namespace std;
// int modularExponentiation(int x, int n, int m){
//   int ans = 1;
//   while(n>0){
//     if(n&1){
//       ans = (1LL * (ans) * (x)%m)%m;
//     }
//     x = (1LL * (x)%m * (x)%m)%m;
//     n=n>>1;
//   }
//   return ans;
// }

// // Pigeon hole principle
// #include <iostream>
// #include <vector>
// #include <climits>
// #include <algorithm>>
// using namespace std;
// class Solution{
// public:
//   int maximumGap(vector<int>& nums){
// const int n = nums.size();
//     if(n<=1) return 0;
//     int maxE = *max_element(nums.begin(), nums.end());
//     int minE = *min_element(nums.begin(), nums.end());
//     double len = double(maxE-minE)/double(n);
//     vector<int> maxA(n, INT_MIN);
//     vector<int> minA(n, INT_MAX);
//     for(int i=0; i<n; i++){
//       int index = (nums[i]-minE)/len;
//       maxA[index] = max(maxA[index], nums[i]);
//       minA[index] = min(minA[index], nums[i]);
//     }
//     int gap = 0, prev = maxA[0];
//     for(int i=1; i<n; i++){
//       if(minA[i]==INT_MAX) continue;gap = max(gap, minA[i] - prev);
//       prev = maxA[i];
//     }
//     return gap;
//   }
// };

// Catalon number
// #include <iostream>
// #include <vector>
// #include <climits>
// #include <algorithm>>
// class Solution {
// public:
//     int numTrees(int n) {
//       int dp[n+1];
//       if(n==0 || n==1) return n;
//       dp[0]=1; dp[1]=1;
//       for(int i=2;i<=n;i++)
//       {
//           dp[i]=0;
//           for(int j=0;j<i;j++)
//           {
//               dp[i]+=dp[j]*dp[i-j-1];
//           }
//       }
//         return dp[n];
//     }
// };

// // Increment - decrement principle
// #include <string> 
// #include <vector>
// int finalValueAfterOperations(vector<string>& operations){
//   int x=0;
//   for(auto&& i:operations){
//     if(i.compare("++X")==0 || i.compare("X++")==0) ++x;
//     if(i.compare("--X")==0 || i.compare("X--")==0) --x;
//   }
//   return (x);
// }

// Segmented Seive
// #include <iostream>
// #include <vector>
// #include <climits>
// #include <algorithm>>
// class Solution {
// public:
//     int countPrimes(int n) {
//       int a[n+1];
//       for(int i=0; i<=0; i++){
//         a[i]=0;
//       }
//       for(int i=2; i*i<=n; i++){
//       for(int j=i+1; j<=n; j+=i){
//           a[j]=1;
//         }
//       }
//       int cnt = 0;
//       for(int i=2; i<=n; i++){
//         if(a[i]==0){
//           cnt++;
//         }
//       }
//       return cnt;
//     }
// };