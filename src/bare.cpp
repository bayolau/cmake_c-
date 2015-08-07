
#include <iostream>

#include "CMakeConfig.h"

#ifdef USE_FOO
#include "foo.h"
#endif


int main(int argc, char* argv[]) {
  std::cout << VERSION_MAJOR << std::endl;
  std::cout << VERSION_MINOR << std::endl;
#ifdef USE_FOO
  junk::foo::printTo(std::cout);
#endif
}
