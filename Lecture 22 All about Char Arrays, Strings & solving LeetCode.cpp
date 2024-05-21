// #include <iostream>
// #include <string>
// using namespace std;
// int getLength(char name[]){
//   int count=0;
//   for(int i=0; name[i]!='\0'; i++){
//     count++;
//   }
//   return count;
// }
// int main(){
//   char name[20];
//   cout<<"Enter your name: "<<endl;
//   cin>>name;
//   name[2]='\0';
//   cout<<"Your name is: "<<name<<endl;
//   cout<<"Length "<<getLength(name)<<endl;
// }

// REVERSE OF A STRING
// #include <iostream>
// #include <algorithm> // Include this for the swap function
// #include <string>
// using namespace std;

// int getLength(char name[]){
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++) {
//         count++;
//     }
//     return count;
// }

// void reverse(char name[], int n){
//     int s = 0;
//     int e = n - 1;
//     while (s < e) {
//         swap(name[s++], name[e--]);
//     }
// }

// int main(){
//     char name[20];
//     cin >> name;
//     int length = getLength(name);
//     reverse(name, length);
//     cout << "Your name after reversing is: " << name << endl;
//     return 0; // Good practice to include this
// }


// Check if a string is a palindrome or not
// #include <iostream>
// #include <string>
// using namespace std;
// char toLowerCase(char ch){
//   if(ch>='a' && ch<='z')
//     return ch;
//   else{
//     char temp=ch-'A'+'a';
//     return temp;
//   }
// }

// bool checkPalindrome(char a[], int n){
//   int s=0;
//   int e=n-1;
//   while(s<=e){
//     if(toLowerCase(a[s])!=toLowerCase(a[e])){
//       return 0;
//     }
//     else{
//       s++;
//       e--;
//     }
//   }
//   return 1;
// }
// int getLength(char name[]){
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++) {
//         count++;
//     }
//     return count;
// }

// int main(){
//     char name[20];
//     cin >> name;
//     int length = getLength(name);
//     cout << "Your name after reversing is: " << name << endl;
//   cout<<"Palindrome or not: "<<checkPalindrome(name, length)<<endl;
//     return 0; // Good practice to include this
//   cout<<"CHARACTER is "<<toLowerCase('b')<<endl;
//   cout<<"CHARACTER is "<<toLowerCase('c')<<endl;
// }

// Valid palindrome
// #include <iostream>
// #include <string>
// using namespace std;
// class solution{
// private:
// bool valid(char ch){
//   if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
//     return 1;
//   }
//   return 0;
// }
// char toLowerCase(char ch){
//   if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
//     return ch;
//   }
//   else{
//     char temp=ch-'A'+'a';
//     return temp;
//   }
// }
// bool checkPalindrome(string a){
//   int s=0;
//   int e=a.length()-1;
//   while(s<=e){
//     if(a[s]!=a[e]){
//       return 0;
//     }
//     else{
//       s++;
//       e--;
//     }
//   }
//   return 1;
// }
// public: 
// bool isPalindrome(string s){
//   //faltu character hata do
//   string temp="";
//   for(int i=0; i<s.length(); i++){
//     if(valid(s[i])){
//       temp.push_back(s[i]);
//     }
//   }
//   //create a new string
//   for(int j=0; j<temp.length(); j++){
//     temp[j]=toLowerCase(temp[j]);
//   }
// }
// };

// REVERSE WORD IN A STRING
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//   string s= "my name is khan";
//   int start = 0;
//   int p = 0;
//   for(int i=0; i<s.length(); i++){
//     if(s[p]==' ' || s[p]=='\0'){
//       int end = p-1;
//       while(start<=end){
//         swap(s[start], s[end]);
//         start++;
//         end--;
//       }
//       start = p+1;
//     }
//     p++;
//   }
//   cout<<s<<endl;
// }

// // Return maximum occuring character in an input string
// #include <iostream>
// #include <string>
// using namespace std;
// char getmaxOccCharacter(string s){
//   int arr[26]={0};
//   //create an array of count of characters
//   for(int i=0; i<s.length(); i++){
//     char ch=s[i];
//     //lowercase
//     int number=0;
//     number=ch-'a';
//     arr[number]++;
//   }
//   int maxi=-1, ans=0;
//   for(int i=0; i<26; i++){
//     if(maxi<arr[i]){
//       ans=i;
//       maxi=arr[i];
//     }
//   }
//   char finalAns=ans+'a';
//   return finalAns;
// }
// int main(){
//   string s;
//   cin>>s;
//   cout<<getmaxOccCharacter(s)<<endl;

// }

// // Return minimum occuring character in an input string
// #include <iostream>
// #include <string>
// #include <climits>
// using namespace std;
// char getmaxOccCharacter(string s){
//   int arr[26]={0};
//   //create an array of count of characters
//   for(int i=0; i<s.length(); i++){
//     char ch=s[i];
//     //lowercase
//     int number=0;
//     number=ch-'a';
//     arr[number]++;
//   }
  
//   int mini = INT_MAX;
//   char ans = '\0';
//   for (int i = 0; i < 26; i++) {
//       if (arr[i] > 0 && arr[i] < mini) {
//           mini = arr[i];
//           ans = i + 'a';
//       }
//   }
//   return ans;
// }
// int main(){
//   string s;
//   cin>>s;
//   cout<<getmaxOccCharacter(s)<<endl;
// }

// Replacing Space
// #include <iostream>
// #include <string>
// #include <climits>
// using namespace std;
// string replaceSpaces(string &str){
//   string temp="";
//   for(int i=0; i<str.length(); i++){
//     if(str[i] == ' '){
//       temp.push_back('@');
//       temp.push_back('4');
//       temp.push_back('0');
//     }
//     else{
//       temp.push_back(str[i]);
//     }
//   }
// }

// // Remove all occurences of substring
// #include <iostream>
// #include <string>
// #include <climits>
// using namespace std;
// class solution{
// public:
// string removeOccurrences(string s, string part){
//   while(s.length()!=0 && s.find(part)<s.length()){
//     s.erase(s.find(part), part.length());
//   }
//   return s;
// }
// };

// // Permutation in string
// #include <iostream>
// #include <string>
// #include <climits>
// using namespace std;
// class solution{
// private:
// bool checkEqual(int a[26], int b[26]){
//   for(int i=0; i<26; i++){
//     if(a[i]!=b[i])
//       return 0;
//   }
//   return 1;
// }
// public:
// bool checkInclusion(string s1, string s2){
//   int count1[26]={0};
//   for(int i=0; i<s1.length(); i++){
//     int index=s1[i]-'a';
//     count1[index]++;
//   }
//   int i=0;
//   int windowSize=s1.length();
//   int count2[26]={0};

//   while(i<windowSize && i<s2.length()){
//     int index=s2[i]-'a';
//     count2[index]++;
//     i++;
//   }
//   if (checkEqual(count1, count2)){
//     return 1;
//   }
//   while(i<s2.length()){
//     char newChar=s2[i];
//     int index=newChar-'a';
//     count2[index]++;
    
//     char oldChar=s2[i-windowSize];
//     index=oldChar-'a';
//     count2[index]--;
//     i++;
    
//     if(checkEqual(count1, count2))
//       return 1;
//   }
//   return 0;
//   }
// };

// // Remove all adjacent duplicates in string
// #include<iostream>
// #include<string>
// #include<climits>
// using namespace std;
// string removeDuplicates(string s) {
//     string res;

//     for(char ch : s){
//         if(!res.empty() && res[res.size() - 1] == ch) res.pop_back();
//         else res+=ch;
//     }
//     return res;
// }

// //String compression
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// class Solution {
// public:  
//     int compress(vector<char>& chars) {
//         int i = 0;
//         int ansIndex = 0;
//         int n = chars.size();
//         while (i < n) {
//             int j = i + 1;
//             // Find the next index where the character is different
//             while (j < n && chars[i] == chars[j]) {
//                 j++;
//             }
//             // Store the current character
//             chars[ansIndex++] = chars[i];
//             // Count of the current character
//             int count = j - i;
//             if (count > 1) {
//                 string cnt = to_string(count);
//                 for (char ch : cnt) {
//                     chars[ansIndex++] = ch;
//                 }
//             }
//             // Move to the next new character
//             i = j;
//         }
//         // Return the length of the compressed string
//         return ansIndex;
//     }
// };
// int main() {
//     vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
//     Solution solution;
//     int newLength = solution.compress(chars);

//     // Output the compressed characters
//     for (int i = 0; i < newLength; ++i) {
//         cout << chars[i];
//     }
//     cout << endl;
//     // Output the length of the compressed array
//     cout << "Length of compressed array: " << newLength << endl;
//     return 0;
// }
