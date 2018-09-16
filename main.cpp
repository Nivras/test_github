#include <iostream>
#include <string>
#include "TestCount.h"

using namespace std;

int main() {
  string s = "going to merge!!!";

  cout << s << endl;

  TestCount cnt;
  cnt.add_cnt();
  cnt.add_cnt();
  cnt.print();

  std::cout << "Hello, World!" << std::endl;
  return 0;
}

