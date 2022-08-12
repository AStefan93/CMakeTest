#include "hello_world.hpp"

#include <iostream>

namespace CMakeTest::HelloWorld {

std::string fn_hello_world() { return "hello world\n"; }

}  // namespace CMakeTest::HelloWorld

int main() {
  std::cout << CMakeTest::HelloWorld::fn_hello_world();
  return 0;
}