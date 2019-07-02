#include <iostream>
#include <string>

using namespace std;

int main () {
  /**/
  // Test cases code
	int c;
  do {
  /**/

    // Main code
          
    int n, k, a[50], r = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
      cin >> a[i];

    for(int i = 0; i < n; i++)
      if(a[i] >= a[k-1] && a[i] != 0)
        r++;


    cout << r << endl;
    
  /**/
    cin >> c;
  } while(c == 1);
	/**/
	return 0;
}

