#pragma once

#include <Modloader/macros.h>
#include <string>

namespace modloader::win {
    IL2CPP_MODLOADER_DLLEXPORT void focus_window(const std::string& window_name);
}
