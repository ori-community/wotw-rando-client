#pragma once
#include <Modloader/app/structs/WebSocketContext.h>
#include <Modloader/app/structs/WebSocketContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebSocketContext {
        inline app::WebSocketContext__Class** type_info() {
            static app::WebSocketContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebSocketContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebSocketContext__Class* get_class() {
            return il2cpp::get_class<app::WebSocketContext__Class>(type_info(), "System.Net.WebSockets", "WebSocketContext");
        }
        inline app::WebSocketContext* create() {
            return il2cpp::create_object<app::WebSocketContext>(get_class());
        }
    } // namespace WebSocketContext
} // namespace app::classes::types
