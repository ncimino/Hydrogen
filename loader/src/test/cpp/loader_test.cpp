// Copyright (c) eContriver, LLC

#include "loader.h"
#include <cassert>

int main() {
    com::econtriver::hydrogen::Greeter greeter;
    assert(greeter.greeting().compare("Hello from C++!") == 0);
    return 0;
}
