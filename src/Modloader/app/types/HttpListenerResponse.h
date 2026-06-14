#pragma once
#include <Modloader/app/structs/HttpListenerResponse.h>
#include <Modloader/app/structs/HttpListenerResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpListenerResponse {
        inline app::HttpListenerResponse__Class** type_info() {
            static app::HttpListenerResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HttpListenerResponse__Class**)(modloader::win::memory::resolve_rva(0x04727DC0));
            }
            return cache;
        }
        inline app::HttpListenerResponse__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerResponse__Class>(type_info(), "System.Net", "HttpListenerResponse");
        }
        inline app::HttpListenerResponse* create() {
            return il2cpp::create_object<app::HttpListenerResponse>(get_class());
        }
    } // namespace HttpListenerResponse
} // namespace app::classes::types
