#pragma once

#include <input/rando_bindings.h>

#include <macros.h>
#include <string_view>

namespace randomizer {
    namespace ipc {
        using request_handler = void (*)(const nlohmann::json& j);

        void send_message(const nlohmann::json& message);
        void register_request_handler(std::string_view name, request_handler handler);
    } // namespace ipc
} // namespace randomizer
