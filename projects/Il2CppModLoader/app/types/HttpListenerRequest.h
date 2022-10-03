#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpListenerRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpListenerRequest__Class** type_info;
        inline app::HttpListenerRequest__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerRequest__Class>(type_info, "System.Net", "HttpListenerRequest");
        }
        inline app::HttpListenerRequest* create() {
            return il2cpp::create_object<app::HttpListenerRequest>(get_class());
        }
    } // namespace HttpListenerRequest
} // namespace app::classes::types
