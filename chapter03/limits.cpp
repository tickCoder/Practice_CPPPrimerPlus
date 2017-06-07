#include <iostream>
#include <climits>

int main(int argc, char const *argv[]) {
  using namespace std;

  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  cout << "---------------------" << endl;
  cout << "size:" << endl;
  cout << "short is " << sizeof n_short << " bytes" << endl;
  cout << "int is " << sizeof(int) << " bytes" << endl;
  cout << "long is " << sizeof n_long << " bytes" << endl;
  cout << "long long is " << sizeof n_llong << " bytes" << endl;
  cout << "unsigned long long is " << sizeof(unsigned long long) << " bytes" << endl;
  cout << endl;

  cout << "---------------------" << endl;
  cout << "Max values:" << endl;
  cout << "short: " << n_short << endl;
  cout << "unsigned short: " << USHRT_MAX << endl;
  cout << "int: " << n_int << endl;
  cout << "unsigned int: " << UINT_MAX << endl;
  cout << "long: " << n_long << endl;
  cout << "long long: " << n_llong << endl;
  cout << "unsigned long long: " << ULLONG_MAX << endl;
  cout << endl;

  cout << "---------------------" << endl;
  cout << "Bits per byte: " << CHAR_BIT << endl;

  cout << "---------------------" << endl;
  cout << "sizeof wchar_t: " << sizeof(wchar_t)  << " bytes" << endl;

  return 0;
}
