#pragma once

#include <input/rando_bindings.h>

#include <macros.h>
#include <string_view>

namespace ipc
{
    using request_handler = void(*)(nlohmann::json& j);

    void send_message(std::string_view message);
    void register_request_handler(std::string_view name, request_handler handler);
}
