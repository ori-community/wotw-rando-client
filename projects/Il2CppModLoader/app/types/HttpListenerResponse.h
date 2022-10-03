#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpListenerResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpListenerResponse__Class** type_info;
        inline app::HttpListenerResponse__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerResponse__Class>(type_info, "System.Net", "HttpListenerResponse");
        }
        inline app::HttpListenerResponse* create() {
            return il2cpp::create_object<app::HttpListenerResponse>(get_class());
        }
    } // namespace HttpListenerResponse
} // namespace app::classes::types
