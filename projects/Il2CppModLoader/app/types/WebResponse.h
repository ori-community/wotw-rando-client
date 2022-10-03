#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebResponse__Class** type_info;
        inline app::WebResponse__Class* get_class() {
            return il2cpp::get_class<app::WebResponse__Class>(type_info, "System.Net", "WebResponse");
        }
        inline app::WebResponse* create() {
            return il2cpp::create_object<app::WebResponse>(get_class());
        }
    } // namespace WebResponse
} // namespace app::classes::types
