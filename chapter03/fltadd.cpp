#include <iostream>
#include <cfloat>

using namespace std;

int main(int argc, char const *argv[]) {

  cout << "----------------------------------" << endl;

  cout << "float的最小有效数字：" << FLT_DIG << endl;

  float a = 2.34E+22f; // 23400000000000000000000
  float b = a + 1.0f;  // 23400000000000000000001
  // 应为只有前6～7位才有效，所以个位数的1没有效果

  cout << "a is " << a << endl;
  cout << "b-a is " << b-a << endl;

  float c = a + 0.00001E+22f;
  cout << "c is " << c << endl;
  cout << "c-a is " << c-a << endl;

  float d = a + 0.000001E+22f;
  cout << "d is " << d << endl;
  cout << "d-a is " << d-a << endl;

  cout << "----------------------------------" << endl;

  return 0;
}
