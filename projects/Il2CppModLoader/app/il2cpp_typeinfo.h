#pragma once

#include <Il2CppModLoader/macros.h>

#define IL2CPP_TYPEDEF(a, n) extern IL2CPP_MODLOADER_DLLEXPORT n##__Class** n##__TypeInfo;

namespace app {
#include "il2cpp_typeinfo_registration.h"
}

#undef IL2CPP_TYPEDEF