#include <iostream>
using namespace std;
//GOOGLE KICKSTART QUESTION
//1 2 0 7 2 0 2 2

int main()
{
 int n;
 cout << "Enter Size of an Array" << endl;
 cin >> n;

 int arr[n + 1];

 cout << "Enter Elements of an Array" << endl;
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 arr[n] = -1; // assigning last element as -1;

 if (n == 1)
 {
  cout << "1" << endl;
  return 0;
 }
 int ans = 0;
 int mx = -1;

 for (int i = 0; i < n; i++)
 {
  if (arr[i] > mx && arr[i] > arr[i + 1])
  {
   ans++;
  }
  mx = max(mx, arr[i]);
 }
 cout << ans << endl;
 return 0;
}
