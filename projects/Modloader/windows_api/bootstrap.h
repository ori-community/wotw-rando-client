#pragma once

#include <Modloader/macros.h>

#include <filesystem>
#include <string_view>

namespace modloader::win::bootstrap {
    using library_handle = void*;
    using func_ptr = void (*)();

    bool bootstrap();
    void bootstrap_shutdown();
} // namespace modloader::win::bootstrap
