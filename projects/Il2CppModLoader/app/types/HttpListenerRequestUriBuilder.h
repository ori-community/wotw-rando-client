#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpListenerRequestUriBuilder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpListenerRequestUriBuilder__Class** type_info;
        inline app::HttpListenerRequestUriBuilder__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerRequestUriBuilder__Class>(type_info, "System.Net", "HttpListenerRequestUriBuilder");
        }
        inline app::HttpListenerRequestUriBuilder* create() {
            return il2cpp::create_object<app::HttpListenerRequestUriBuilder>(get_class());
        }
    } // namespace HttpListenerRequestUriBuilder
} // namespace app::classes::types
