#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  cout << ios_base::fixed << endl;
  cout << ios_base::floatfield << endl;

  cout.setf(ios_base::fixed, ios_base::floatfield);
  float tub = 10.0/3.0;
  double mint = 10.0/3.0;
  const float million = 1.0e6;

  cout << "0: " << tub << endl;
  cout << "0: " << mint << endl;
  cout << "1: " << million * tub << endl;
  cout << "2: " << 10 * million * tub << endl;

  cout << "3: " << mint << endl;
  cout << "4: " << million * mint << endl;
  return 0;
}
