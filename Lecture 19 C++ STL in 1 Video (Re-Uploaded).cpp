// ARRAYS
// #include <iostream>
// #include <array>
// using namespace std;
// int main(){
//   //int basic[3]={1,2,3};
//   array<int,4> a={1,2,3,4};
//   int size=a.size();
//   for(int i=0;i<size;i++){
//     cout<<a[i]<<endl;
//   }
//   cout<<"Element at 2nd index "<<a.at(2)<<endl;
//   cout<<"Empty or not "<<a.empty()<<endl;
//   cout<<"First element "<<a.front()<<endl;
//   cout<<"Last element "<<a.back()<<endl;
// }

// VECTORS
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//   vector<int> v;
//   cout<<"Capacity "<<v.capacity()<<endl;
  
//   v.push_back(1);
//   cout<<"Capacity "<<v.capacity()<<endl;

//   v.push_back(2);
//   cout<<"Capacity "<<v.capacity()<<endl;

//   v.push_back(3);
//   cout<<"Capacity "<<v.capacity()<<endl;

//   cout<<"Front "<<v.front()<<endl;
//   cout<<"Back "<<v.back()<<endl;
//   cout<<"Before pop "<<endl;
//   for(int i:v){
//     cout<<i<<" ";
//   }
//   v.pop_back();

//   cout<<"after pop"<<endl;
//   for(int i:v){
//     cout<<i<<" "; 
//   }

//   cout<<"Size "<<v.size()<<endl;
//   cout<<"Before clear "<<v.size()<<endl;
//   v.clear();
//   cout<<"After clear "<<v.size()<<endl;  

//   vector<int> a(5,1);
//   vector<int> last(a);
//   cout<<"print last "<<endl;
//   for(int i:a){
//     cout<<i<<" ";
//   }
//   cout<<endl;
// }

// // DEQUE
// #include <iostream>
// #include <deque>
// using namespace std;
// int main(){
//   deque<int> d;
//   d.push_back(1);
//   d.push_front(2);
//   cout<< endl;
//   cout<<"Print first index elements "<<d.at(1)<<endl;
//   cout<<"Front "<<d.front()<<endl;
//   cout<<"Back "<<d.back()<<endl;
//   cout<<"Empty or not "<<d.empty()<<endl;
//   cout<<"Before erase "<<d.size()<<endl;
//   d.erase(d.begin(),d.begin()+1);
//   cout<<"After erase "<<d.size()<<endl;
//   for(int i:d){
//     cout<<i<<" ";
//   }
// }

// // LIST
// #include <iostream>
// #include <list>
// using namespace std;
// int main(){
//   list<int> l;
//   list<int> n(5, 100);
//   cout<<"Printing n "<<endl;
//   l.push_back(1);
//   l.push_front(2);
  
//   for(int i:l){
//     cout<<i<<" ";
//   }
//   cout<<endl;
//   l.erase(l.begin());
//   cout<<"After erase "<<endl;  
//   for(int i:l){
//     cout<<i<<" ";
//   }
//   cout<<"size of list "<<l.size()<<endl;"
// }

// // STACK
// #include <iostream>
// #include <stack>
// using namespace std;
// int main(){
//   stack<string> s;
//   s.push("love");
//   s.push("babbar");
//   s.push("kumar");
//   s.push("singh");
//   cout<<"Top element "<<s.top()<<endl;
//   s.pop();
//   cout<<"Top element "<<s.top()<<endl;
//   cout<<"Size of stack "<<s.size()<<endl;
//   cout<<"Empty or not "<<s.empty()<<endl;
// }

// // QUEUE
// #include <iostream>
// #include <queue>
// using namespace std;
// int main(){
//   queue<string> q;
//   q.push("love");
//   q.push("babbar");
//   q.push("kumar");
//   q.push("singh");
//   cout<<"Size before pop "<<q.size()<<endl;
//   cout<<"First element "<<q.front()<<endl;
//   q.pop();
//   cout<<"First element "<<q.front()<<endl;
//   cout<<"Size after pop "<<q.size()<<endl;
// }

// // Priority Queue
// #include <iostream>
// #include <queue>
// using namespace std;
// int main(){
//   //max heap
//   priority_queue<int> maxi;

//   //min heap
//   priority_queue<int, vector<int>, greater<int>> mini;

//   maxi.push(1);
//   maxi.push(3);
//   maxi.push(2);
//   maxi.push(0);
//   cout<<"Size "<<maxi.size()<<endl;
//   int n=maxi.size();
//   for(int i=0; i<n; i++){
//     cout<<maxi.top()<<" ";
//     maxi.pop();
//   }
//   cout<<endl;

//   mini.push(5);
//   mini.push(1);
//   mini.push(0);
//   mini.push(4);
//   mini.push(3);
//   cout<<"Size "<<mini.size()<<endl;
//   int m=mini.size();
//   for(int i=0; i<m; i++){
//     cout<<mini.top()<<" ";
//     mini.pop();
//   }
//   cout<<endl;
//   cout<<"Empty or not "<<mini.empty()<<endl;
// }

// // SET
// #include <iostream>
// #include <set>
// using namespace std;
// int main(){
//   set<int> s;
//   s.insert(5);
//   s.insert(5);
//   s.insert(5);
//   s.insert(1);
//   s.insert(6);
//   s.insert(6);
//   s.insert(0);
//   s.insert(0);
//   s.insert(0);
  
//   for(auto i:s){
//     cout<<i<<endl;
//   }
//   cout<<endl;
//   set<int>::iterator it=s.begin();
//   it++;

//   s.erase(it);
//   for(auto i:s){
//     cout<<i<<endl;
//   }
//   cout<<endl;
//   cout<<"5 is present or not "<<s.count(5)<<endl;
//   set<int>::iterator itr=s.find(5);
//   cout<<"Value present at itr "<<*itr<<endl;
//   for(auto it=itr; it!=s.end(); it++){
//     cout<<*it<<" ";
//   }
//   cout<<endl;
// }

// // MAP
// #include <iostream>
// #include <map>
// using namespace std;
// int main(){
//   map<int, string> m;
//   m[1]="babbar";
//   m[13]="kumar";
//   m[2]="love";
//   m.insert({5,"bheem"});
//   cout<<"Before erase "<<endl;
//   for(auto i:m){
//     cout<<i.first<<" "<<i.second<<endl;
//   }
//   cout<<"finding 13 "<<m.count(13)<<endl;
//   m.erase(13);
//   cout<<"After erase "<<endl;
//   for(auto i:m){
//     cout<<i.first<<" "<<i.second<<endl;
//   }
//   auto it=m.find(5);
//   for(auto i=it; i!=m.end(); i++){
//     cout<<(*i).first<<endl;
//   }
// }

// // ALGORITHM
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main(){
//   vector<int> v;
//   v.push_back(1);
//   v.push_back(3);
//   v.push_back(6);
//   v.push_back(7);
//   cout<<"Finding 6 "<<binary_search(v.begin(),v.end(),6)<<endl;
  
//   cout<<"Lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
//   cout<<"Upper bound "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
  
//   int a=3;
//   int b=5;
//   cout<<"Max "<<max(a,b)<<endl;
//   cout<<"Min "<<min(a,b)<<endl;
//   swap(a,b);
//   cout<<"a "<<a<<endl;
  
//   string abcd="abcd";
//   reverse(abcd.begin(),abcd.end());
//   cout<<"String "<<abcd<<endl;

//   rotate(v.begin(),v.begin()+1,v.end());
//   cout<<"After rotate "<<endl;
//   for(int i:v){
//     cout<<i<<" ";
//   }

//   cout<<endl;
//   sort(v.begin(),v.end());
//   for(int i:v){
//     cout<<i<<" ";
//   }
// }