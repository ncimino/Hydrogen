// Copyright (c) 2020 eContriver, LLC

#include "loader.h"
#include <iostream>
#include <stdexcept>

namespace com { namespace econtriver { namespace hydrogen {

int main_(int argc, char** argv, char** env)
{
    Greeter greeter;
    std::cout << greeter.greeting() << std::endl;
    return 0;
}

std::string Greeter::greeting() {
    return std::string("Hello from C++!");
}

}}}

int main(int argc, char** argv, char** env)
{
  try {
    return com::econtriver::hydrogen::main_(argc, argv, env);
  } catch (const std::exception & e) {
    std::string msg = e.what();
    if(!msg.empty()) {
      std::cerr << "ERROR: Uncaught internal exception with message [" << msg << "]." << std::endl;
    } else {
      std::cerr << "ERROR: Uncaught internal exception detected - exiting." << std::endl;
    }
  } catch (...) {
    std::cerr << "ERROR: Catch-all uncaught internal exception detected - exiting." << std::endl;
  }
  return -1;
}
