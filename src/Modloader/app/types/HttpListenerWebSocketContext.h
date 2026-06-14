#pragma once
#include <Modloader/app/structs/HttpListenerWebSocketContext.h>
#include <Modloader/app/structs/HttpListenerWebSocketContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpListenerWebSocketContext {
        inline app::HttpListenerWebSocketContext__Class** type_info() {
            static app::HttpListenerWebSocketContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpListenerWebSocketContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpListenerWebSocketContext__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerWebSocketContext__Class>(type_info(), "System.Net.WebSockets", "HttpListenerWebSocketContext");
        }
        inline app::HttpListenerWebSocketContext* create() {
            return il2cpp::create_object<app::HttpListenerWebSocketContext>(get_class());
        }
    } // namespace HttpListenerWebSocketContext
} // namespace app::classes::types
