// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int i = 1;
//   while (i <= n) {
//     int j = 1;
//     while (j <= n) {
//       cout << i;
//       j = j + 1;
//     }
//     cout << endl;
//     i = i + 1;
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int i = 1;
//   while (i <= n) {
//    int j=1;
//     while(j<=n){
//       cout<<j;
//       j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int i = 1;
//   int count = 1;
//   while (i <= n) {
//     int j=1;
//     while(j<=n){
//       cout<<count<<" ";
//       count=count+1;
//       j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//   }
// }

// 

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   int count = 1;
//   while (row <= n) {
//     int col=1;
//     while(col<=row){
//       cout<<count<<" ";
//       count=count+1;
//       col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
//   }
// }

// #include <iostream>
// using namespace std;
// int  main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col=1;
//     int value = row;
//     while(col<=row){
//       cout<<value<<" ";
//       value=value+1;
//       col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   int count = 1;
//   while (row <= n) {
//     int col=1;
//     while(col<=row){
//       cout<<count<<" ";
//       count=count+1;
//       col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int i = 1;
//   while (i <= n) {
//     int j=1;
//     while(j<=i){
//       cout<<(i-j+1)<<" ";
//       j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col=1;
//     while(col<=n){
//       char ch = 'A'+row-1;
//       cout<<ch<<" ";
//       col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col=1;
//     while(col<=n){
//       char ch = 'A'+col-1;
//       cout<<ch<<" ";
//       col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
//   }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++){
//         for (int col = 1; col <= n; col++){
//             char ch = 'A' + (row - 1) + (col - 1);
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col=1;
//     while(col<=row){
//       char ch = 'A'+row-1;
//       cout<<ch<<" ";
//       col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
//   }
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col=1;
//     while(col<=row){
//       char ch = 'A'+n-row;
//       cout<<ch<<" ";
//       col=col+1;
//     }
//     cout<<endl;
//     row=row+1;
//   }
// }

// 

// #include <iostream>
// using namespace std;
// int main() {
//     int rows;
//     cin >> rows;
//     for(int i = rows; i >= 1; --i) {
//         for(int j = 1; j <= i; ++j) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int n=1;
//   cin >> n;
//   int row=1;
//   while(row<=n){
//     int space = n-row;
//     while(space){
//       cout<<" ";
//       space=space-1;
//     }
//     int col = 1;
//     while(col<=row){
//       cout<<col;
//       col=col+1;
//     }
//     int start = row -1;
//     while(start){
//       cout<<start;
//       start=start-1;
//     }
//     cout<<endl;
//     row=row+1;
//   } 
// }