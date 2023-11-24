#pragma once

#include <Core/macros.h>
#include <Modloader/windows_api/console.h>
#include <format>
#include <chrono>

namespace dev {
    CORE_DLLEXPORT void print_time(std::chrono::time_point<std::chrono::steady_clock> start, std::string_view tag);
}