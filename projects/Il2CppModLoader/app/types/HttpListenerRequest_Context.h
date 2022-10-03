#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpListenerRequest_Context {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpListenerRequest_Context__Class** type_info;
        inline app::HttpListenerRequest_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpListenerRequest_Context__Class>(type_info, "System.Net", "HttpListenerRequest", "Context");
        }
        inline app::HttpListenerRequest_Context* create() {
            return il2cpp::create_object<app::HttpListenerRequest_Context>(get_class());
        }
    } // namespace HttpListenerRequest_Context
} // namespace app::classes::types
