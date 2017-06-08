#include <iostream>
using namespace std;

// 不同编译器可能表现不同
int main(int argc, char const *argv[]) {
  const int code = 66;
  int x = 66;
  //char c1 = {31325};
  char c2 = {66};
  char c3 = {code};
  char c4 = {x};
  x = 31325;
  char c5 = x;

  cout << c2 << endl;
  cout << c3 << endl;
  cout << c4 << endl;
  cout << c5 << endl;

  return 0;
}
