#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebClient_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebClient_c__Class** type_info;
        inline app::WebClient_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WebClient_c__Class>(type_info, "System.Net", "WebClient", "<>c");
        }
        inline app::WebClient_c* create() {
            return il2cpp::create_object<app::WebClient_c>(get_class());
        }
    } // namespace WebClient_c
} // namespace app::classes::types
