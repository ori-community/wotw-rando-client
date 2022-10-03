#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebRequest__Class** type_info;
        inline app::WebRequest__Class* get_class() {
            return il2cpp::get_class<app::WebRequest__Class>(type_info, "System.Net", "WebRequest");
        }
        inline app::WebRequest* create() {
            return il2cpp::create_object<app::WebRequest>(get_class());
        }
    } // namespace WebRequest
} // namespace app::classes::types
