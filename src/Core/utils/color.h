#pragma once

#include <Core/macros.h>

#include <Modloader/app/structs/Color.h>

#include <string_view>

namespace utils {
    CORE_DLLEXPORT app::Color hex_string_to_color(std::string_view str, bool flip = false);
}
