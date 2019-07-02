#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

  /* uncomment to enable Test Cases Mode *
  int nextTestCaseExists;
  do {
  /* Main Code */
  unsigned short n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  unsigned short toastByMillilitersPerFriend = k * l / nl;
  unsigned short toastByLimes = c * d;
  unsigned short toastBySalt = p / np;
  unsigned short min = toastByMillilitersPerFriend < toastByLimes ? 
                        toastByMillilitersPerFriend < toastBySalt ? 
                          toastByMillilitersPerFriend : toastBySalt : toastByLimes < toastBySalt ? 
                            toastByLimes : toastBySalt;
  cout << min / n << endl;
  /* uncomment to enable Test Cases Mode *
    cin >> nextTestCaseExists;
  } while(nextTestCaseExists == 1);
  /**/  

  return 0;
}