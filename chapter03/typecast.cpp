#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int auks, bats, coots;

  auks = 19.99 + 11.99;
  bats = (int)19.99 + (int)11.99; //C的强制转换
  coots = int(19.99) + int(11.99); //C++的强制转换

  cout << auks << endl;
  cout << bats << endl;
  cout << coots << endl;

  char ch  = 'z';

  cout << ch << endl;
  cout << int(ch) << endl;
  cout << static_cast<int>(ch) << endl; //C++的强制转换

  return 0;
}
