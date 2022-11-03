#pragma once

#include <Modloader/macros.h>

#define IL2CPP_TYPEDEF(a, n) extern IL2CPP_MODLOADER_DLLEXPORT n##__Class** n##__TypeInfo;

namespace app {
#include "il2cpp_typeinfo_registration.h"

    // TODO: Make fancy later
    extern IL2CPP_MODLOADER_DLLEXPORT ::app::UberStateGroup__Class** UberStateGroup__TypeInfo;
}

#undef IL2CPP_TYPEDEF