#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {

  auto n = 100;
  auto x = 1.5;
  auto y = 1.3e12L;

  std::vector<double> scores = {2, 3};
  auto pv = scores.begin();
  cout << *pv << endl;

  std::vector<double>::iterator it = scores.begin();
  cout << *it << endl;

  return 0;
}
