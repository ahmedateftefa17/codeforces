#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
  /* uncomment to enable Test Cases Mode *
  int nextTestCaseExists;
  do {
  /* Main Code */
  unsigned int n, c;
  cin >> n;
  c = n % 2 == 0 ? n / 2 * n : n / 2.0 * n + 0.5;
  cout << c << endl;
  for (unsigned short i = 0; i < n; i++)
    for (unsigned short j = 0; j < n; j++){ 
      if((i + j) % 2 == 0)  cout << "C"; else cout << "." ;
      if(j == (n - 1)) cout << endl;
    }
  /* uncomment to enable Test Cases Mode *
    cin >> nextTestCaseExists;
  } while(nextTestCaseExists == 1);
  /**/  
  return 0;
}