#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebConnection_AbortHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebConnection_AbortHelper__Class** type_info;
        inline app::WebConnection_AbortHelper__Class* get_class() {
            return il2cpp::get_nested_class<app::WebConnection_AbortHelper__Class>(type_info, "System.Net", "WebConnection", "AbortHelper");
        }
        inline app::WebConnection_AbortHelper* create() {
            return il2cpp::create_object<app::WebConnection_AbortHelper>(get_class());
        }
    } // namespace WebConnection_AbortHelper
} // namespace app::classes::types
