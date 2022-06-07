#pragma once

#define IL2CPP_TYPEDEF(a, n) extern n##__Class** n##__TypeInfo;

namespace app {
#include "il2cpp_type_ptr_addresses.h"
}

#undef IL2CPP_TYPEDEF