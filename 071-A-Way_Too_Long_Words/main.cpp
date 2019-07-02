#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main () {
  /*
	// Test cases code
	int c;
  do {
  /**/

    // Main code
          
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
      string word;
      cin >> word;
      if(word.size() > 10)
        cout << word[0] << word.size() - 2 << word[word.size() - 1] << endl;
      else
        cout << word << endl;
    }
    
  /*
    cin >> c;
  } while(c == 1);
	/**/
	return 0;
}

