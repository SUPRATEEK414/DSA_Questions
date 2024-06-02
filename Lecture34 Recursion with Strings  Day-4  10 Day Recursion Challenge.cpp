//reverse a string using recursion
// #include <iostream>
// #include <string>
// using namespace std;
// void reverse(string& str, int i, int j){
//   cout<<"call recieved for "<<str<<endl;
//   if(i>j){
//     return;
//   }
//   swap(str[i],str[j]);
//   i++;
//   j--;
//   reverse(str,i,j);
// }
// int main() {
//   string name = "abcde";
//   cout<<endl;
//   reverse(name,0,name.length()-1);
//   cout<<endl;
//   cout<<name<<endl;
//   return 0;
// }

//string palindrome
// #include <iostream>
// #include <string>
// using namespace std;
// bool checkPalindrome(string str, int i, int j){
//   if(i>j){
//     return true;
//   }
//   if(str[i]!=str[j]){
//     return false;
//   }
//   else{
//     return checkPalindrome(str,i+1,j-1);
//   }
// }
// int main(){
//   string name = "abba";
//   cout<<endl;
//   bool isPalindrome = checkPalindrome(name,0,name.length()-1);
//   if(isPalindrome){
//     cout<<"it is a palindrome"<<endl;
//   }
//   else{
//     cout<<"it is not a palindrome"<<endl;
//   }
//   return 0;
// }

//power of 2
// #include <iostream>
// #include <string>
// using namespace std;
// bool isPowerOfTwo(int n){
//   if(n==0){
//     return false;
//   }
//   else{
//     while(n!=1){
//       if(n%2!=0){
//         return false;
//       }
//     }
//   }
//   return true;
// }
// int main(){
//   int n;
//   cin>>n;
//   bool ans = isPowerOfTwo(n);
//   if(ans){
//     cout<<"it is a power of 2"<<endl;
//   }
//   else{
//     cout<<"it is not a power of 2"<<endl;
//   }
//   return 0;
// }

//alternate for above 
// #include<iostream>
// using namespace std;

// int power(int a, int b) {
//     //base case
//     if( b == 0 )
//         return 1;
//     if(b == 1)
//         return a;
//     //RECURSIVE CALL
//     int ans = power(a, b/2);

//     //if b is even
//     if(b%2 == 0) {
//         return ans * ans;
//     }
//     else {
//         //if b is odd
//         return a * ans * ans;
//     }
// }
// int main() {
//     int a,b;
//     cin >> a >> b;
//     cout << endl;
//     int ans = power(a,b);
//     cout << "Answer is " << ans << endl;
//     return 0;
// }

//bubble sort
// #include<iostream>
// using namespace std;
// void sortedArray(int *arr, int n){
//   //base case
//   if(n==0 || n==1){
//     return;
//   }
//   for(int i=0; i<n-1; i++){
//     if(arr[i]>arr[i+1]){
//       swap(arr[i],arr[i+1]);
//     }
//   }
//   sortedArray(arr,n-1);
// }
// int main(){
//   int arr[5] = {2,5,1,6,9};
//   sortedArray(arr,5);
//   for(int i=0; i<5; i++){
//     cout<<arr[i]<<" ";
//   }
// }