#include <iostream>

int main(int argc, char const *argv[]) {
  using namespace std;
  char ch = 'M';
  int i = ch;
  cout << ch << "-" << i << endl;
  cout << "xxx" ;
  cout.put(ch);
  cout.put('!');
  cout << endl;
  cout << cout.put(ch) << endl;

  cout << '$' << endl;
  cout << '?' << endl;
  cout << '\?' << endl;
  cout << '"' << endl;
  cout << '\'' << endl;
  cout << '\\' << endl;
  cout << '\a' << endl;

  cout << "----" << endl;
  cout << "hi\x1a there" << endl;

  return 0;
}
