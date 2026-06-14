#pragma once

#include <string>
#include <Modloader/macros.h>

namespace modloader::win {
    IL2CPP_MODLOADER_DLLEXPORT void copy_text_to_clipboard(const std::string& text);
}
