// REVERSE INTEGER
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// class Solution {
// public:
//     int reverse(int x) {
//         int ans=0;
//         while(x!=0){
//             int digit = x%10;
//             if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
//                 return 0;
//             }
//             ans = (ans*10)+digit;
//             x=x/10;
//         }
//         return ans;
//     }
// };

// COMPLEMENT OF BASE 10 INTEGER
// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
// class Solution {
// public:
//     int bitwiseComplement(int n) {
//         int m = n;
//         int mask=  0;
//         if(n==0){
//             return 1;
//         }
//         while(m!=0){
//             mask = (mask << 1) | 1;
//             m = m >> 1;
//         }
//         int ans = (~n) & mask;
//         return ans;
//     }
// };

// POWER OF TWO
// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2x.
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         for(int i=0; i<=30; i++){
//             int ans = pow(2,i);
//             if(ans==n){
//                 return true;
//             }
//         }
//         return false;
//     }
// };


