#pragma once

#include <Core/macros.h>
#include <string_view>
#include <nlohmann/json.hpp>

namespace randomizer {
    namespace ipc {
        using request_handler = void (*)(const nlohmann::json& j);

        CORE_DLLEXPORT void send_message(const nlohmann::json& message);
        CORE_DLLEXPORT void register_request_handler(std::string_view name, request_handler handler);
    } // namespace ipc
} // namespace randomizer
