#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main () {
  /**/
  // Test cases code
	int c;
  do {
  /**/

    // Main code
          
    string word, newWord;
    cin >> word;
    for(int i = 0; i < word.length(); i++){
      char wordi = tolower(word[i]);
      if( ! (wordi == 'a' || wordi == 'o' || wordi == 'y' || wordi == 'e' || wordi == 'u' || wordi == 'i') ){
        newWord += '.';
        newWord += wordi;
      }
    }
    cout << newWord << endl;      
    
  /**/
    cin >> c;
  } while(c == 1);
	/**/
	return 0;
}
