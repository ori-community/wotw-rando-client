#pragma once

#include <Modloader/macros.h>

#include <string_view>

namespace modloader::win::bootstrap {
    using library_handle = void*;
    using func_ptr = void (*)();

    bool bootstrap();
    void bootstrap_shutdown();

    IL2CPP_MODLOADER_DLLEXPORT library_handle load_library(std::string_view name);
    IL2CPP_MODLOADER_DLLEXPORT func_ptr load_function(library_handle, std::string_view name);
    IL2CPP_MODLOADER_DLLEXPORT void free_library(library_handle handle);
} // namespace modloader::win::bootstrap