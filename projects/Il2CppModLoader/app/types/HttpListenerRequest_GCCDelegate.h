#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpListenerRequest_GCCDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpListenerRequest_GCCDelegate__Class** type_info;
        inline app::HttpListenerRequest_GCCDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpListenerRequest_GCCDelegate__Class>(type_info, "System.Net", "HttpListenerRequest", "GCCDelegate");
        }
        inline app::HttpListenerRequest_GCCDelegate* create() {
            return il2cpp::create_object<app::HttpListenerRequest_GCCDelegate>(get_class());
        }
    } // namespace HttpListenerRequest_GCCDelegate
} // namespace app::classes::types
