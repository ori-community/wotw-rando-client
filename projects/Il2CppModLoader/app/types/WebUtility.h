#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebUtility__Class** type_info;
        inline app::WebUtility__Class* get_class() {
            return il2cpp::get_class<app::WebUtility__Class>(type_info, "System.Net", "WebUtility");
        }
        inline app::WebUtility* create() {
            return il2cpp::create_object<app::WebUtility>(get_class());
        }
    } // namespace WebUtility
} // namespace app::classes::types
