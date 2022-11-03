#pragma once

#include <Core/macros.h>
#include <nlohmann/json.hpp>
#include <string_view>

namespace core::ipc {
    using request_handler = void (*)(const nlohmann::json& j);

    CORE_DLLEXPORT void send_message(const nlohmann::json& message);
    CORE_DLLEXPORT void register_request_handler(std::string_view name, request_handler handler);
} // namespace core::ipc
