#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  float hats = 50.25;
  float heads = 11.17;

  /*
    ios_base::fixed是设置cout为定点输出格式
    ios_base::floatfield是设置输出时按浮点格式，小数点后有6位数字
  */

  // 如果使用了，就是61.419998，否则就是61.42。为什么????
  cout.setf(ios_base::fixed, ios_base::floatfield);
  cout << hats + heads << endl;

  return 0;
}
