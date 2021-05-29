//GOOGLE KICKSTART QUESTION -
#include <iostream>
#include <climits>
using namespace std;

int main()
{
 int n;
 cout << "Enter Size of Array" << endl;
 cin >> n;

 int arr[n];

 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }

 int ans = 2;
 int d = arr[1] - arr[0];
 int j = 2;
 int curr = 2;

 while (j < n)
 {
  if (arr[j] - arr[j - 1] == d)
  {
   curr++;
  }
  else
  {
   d = arr[j] - arr[j - 1];
   curr = 2;
  }
  ans = max(ans, curr);
  j++;
 }
 cout << ans << endl;
 return 0;

 // Output-
 // Enter Size of Array
 // 7 10 7 4 6 8 10 11 4
}
