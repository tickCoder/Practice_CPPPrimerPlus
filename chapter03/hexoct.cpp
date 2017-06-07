#include <iostream>

int main(int argc, char const *argv[]) {
  using namespace std;

  cout << sizeof(8686876) << endl;
  cout << sizeof(8686876l) << endl;
  cout << sizeof(8686876ull) << endl;

  int chest = 42;
  int waist = 0x42;
  int inseam = 042;

  cout << "---------" << endl;
  cout << chest << endl; // 42
  cout << waist << endl; // 66
  cout << inseam << endl; // 34

  cout << "---------" << endl;
  cout << hex; // 控制符，在下次改变之前，cout都是hex进制输出
  cout << chest << endl;
  cout << waist << endl;
  cout << inseam << endl;

  cout << "---------" << endl;
  cout << oct; // 控制符，在下次改变之前，cout都是oct进制输出
  cout << chest << endl;
  cout << waist << endl;
  cout << inseam << endl;

  return 0;
}
