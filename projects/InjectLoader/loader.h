#pragma once

#include <InjectLoader/macros.h>

namespace inject_loader {
    INJECT_LOADER_DLLEXPORT bool is_initialization_complete();
    INJECT_LOADER_DLLEXPORT int load_inject_dlls();
}