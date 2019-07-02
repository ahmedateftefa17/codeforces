#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

  /* uncomment to enable Test Cases Mode */
  int nextTestCaseExists;
  do {
  /* Main Code */
  unsigned short n, d[100], s, t;
  cin >> n;
  for(unsigned short i = 0; i < n; i++) cin >> d[i];
  cin >> s >> t;
  unsigned short start = s < t ? s : t, end = s > t ? s : t;
  unsigned int l1 = 0, l2 = 0;
  for(unsigned short i = start - 1, loop = 0; loop < end - start; i++, loop++) l1 += d[i];
  for(unsigned short i = end - 1, loop = 0; loop < n - end + start; i++, loop++) l2 += d[i < n ? i : i = 0];
  unsigned int l = l1 < l2 ? l1 : l2;
  cout << l << endl; 
  /* uncomment to enable Test Cases Mode */
    cin >> nextTestCaseExists;
  } while(nextTestCaseExists == 1);
  /**/  

  return 0;
}