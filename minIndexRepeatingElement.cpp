#include <iostream>
using namespace std;
//Oracle,Amazon question
//1,5,3,4,3,5,6
int main()
{
 int n;
 cout << "Enter Size of an Array" << endl;
 cin >> n;
 int arr[n];
 cout << "Enter Elements of Array" << endl;
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }

 int N = 1e6 + 2; //10^6
 int idx[N];
 for (int i = 0; i < N; i++)
 {
  idx[i] = -1;
 }
 int min_dx = INT_MAX;
 for (int i = 0; i < n; i++)
 {
  if (idx[arr[i]] != -1)
  {
   min_dx = min(min_dx, idx[arr[i]]);
  }
  else
  {
   idx[arr[i]] = i;
  }
 }
 if (min_dx == INT_MAX)
 {
  cout << "-1" << endl;
 }
 else
 {
  cout << min_dx + 1 << endl;
 }

 return 0;
}
