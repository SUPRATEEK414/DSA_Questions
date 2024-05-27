// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// void update(int **p){
  // p = p+1;

  // *p = *p+1;

  // **p = **p+1;
// }
// int main(){
//   int i = 5;
//   int* p = &i;
//   int** p2 = &p;
  // cout<<endl<<endl<<"Sab sahi chal rha hai "<<endl<<endl;
  // cout<<"Printing p "<<p<<endl;
  // //cout<<"address of p "<<&p<<endl;
  // cout<<*p2<<endl;

  // cout<<i<<endl;
  // cout<<*p<<endl;
  // cout<<**p2<<endl;

  // cout<<&i<<endl;
  // cout<<p<<endl;
  // cout<<*p2<<endl;

  // cout<<&p<<endl;
  // cout<<p2<<endl;

//   cout<<endl<<endl;
//   cout<<"before "<<i<<endl;
//   cout<<"before "<<p<<endl;
//   cout<<"before "<<p2<<endl;
//   update(p2);
//   cout<<"after "<<i<<endl;
//   cout<<"after "<<p<<endl;
//   cout<<"after "<<p2<<endl;
//   cout<<endl<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//   int first = 8;
//   int second = 11;
//   int *third = &second;
//   first = *third;
//   *third = *third + 2;
//   cout<<first<<" "<<second<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//   float f =12.5;
//   float p = 21.5;
//   float *ptr = &f;
//   (*ptr)++;
//   *ptr = p;
//   cout<<*ptr<<" "<<f<<" "<<p<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//   int arr[5];
//   int *ptr;
//   cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl; 
// return 0; 
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//   int arr[]={11,21,13,14};
//   cout<<*(arr)<<" "<<*(arr+1)<<endl;

//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//   int arr[6]={11, 12, 31};
//   cout<<arr<<" "<<&arr<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//   int arr[]={11,21,13,14};
//   cout<<(arr+1)<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//   int arr[6]={11,21,31};
//   int *p = arr;
//   cout<<p[2]<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//   int arr[]={11,21,13,14,15};
//   cout<<*(arr)<<" "<<*(arr+3)<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//   int arr[]={11,21,31,41};
//   int *ptr = arr++;
//   cout<<*ptr<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//   char arr[] = "abcde";
//   char *p = &arr[0];
//   cout<<p<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//   char arr[] = "abcde";
//   char *p = &arr[0];
//   p++;
//   cout<<p<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// #include <string>
// using namespace std;
// int main(){
//   char str[] = "babbar";
//   char *p = str;
//   cout<<str[0]<<" "<<p[0]<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// #include <string>
// using namespace std;
// void update(int *p){
//   *p = (*p)*2;
// }
// int main(){
//   int i = 10;
//   update(&i);
//   cout<<i<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// #include <string>
// using namespace std;
// int main(){
//   int first = 110;
//   int *p = &first;
//   int **q = &p;
//   int second = (**q)++ + 9;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// #include <string>
// using namespace std;
// int main(){
//   int first = 100;
//   int *p = &first;
//   int **q = &p;
//   int second = ++(**q);
//   int *r = *q;
//   ++(*r);
//   cout<<first<<" "<<second<<endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// #include <string>
// using namespace std;
// void increment(int **p){
//   ++(**p);
// }
// int main(){
//   int num = 110;
//   int *ptr = &num;
//   increment(&ptr);
//   cout<<num<<endl; 
//   return 0;
// }