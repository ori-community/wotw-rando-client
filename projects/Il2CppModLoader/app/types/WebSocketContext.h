#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebSocketContext {
        namespace {
            inline app::WebSocketContext__Class* type_info_ref = nullptr;
        }
        inline app::WebSocketContext__Class** type_info = &type_info_ref;
        inline app::WebSocketContext__Class* get_class() {
            return il2cpp::get_class<app::WebSocketContext__Class>(type_info, "System.Net.WebSockets", "WebSocketContext");
        }
        inline app::WebSocketContext* create() {
            return il2cpp::create_object<app::WebSocketContext>(get_class());
        }
    } // namespace WebSocketContext
} // namespace app::classes::types
