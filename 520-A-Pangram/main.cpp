#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

  /* uncomment to enable Test Cases Mode *
  int nextTestCaseExists;
  do {
  /* Main Code */
  unsigned short n;
  cin >> n;
  string word;
  cin >> word;
  for(unsigned short i = 0; i < n; i++) word[i] = tolower(word[i]);
  if(n < 26) cout << "NO" << endl;
  else
  {
    bool wordIsVaild = true;
    for(unsigned short i = 'a'; i <= int('z'); i++){
      bool charExists = false;
      for(unsigned short j = 0; j < n; j++) if(word[j] == char(i)){
        charExists = true;
        break;
      }
      if(charExists) continue;
      wordIsVaild = false;
      break;
    }
    if(wordIsVaild) cout << "YES"; else cout << "NO"; cout << endl;
  }
  /* uncomment to enable Test Cases Mode *
    cin >> nextTestCaseExists;
  } while(nextTestCaseExists == 1);
  /**/

  return 0;
}
