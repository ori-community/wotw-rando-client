#pragma once

#include <macros.h>
#include <string_view>

#include <Modloader/app/structs/Color.h>

namespace utils {
    CORE_DLLEXPORT app::Color hex_string_to_color(std::string_view str);
}
