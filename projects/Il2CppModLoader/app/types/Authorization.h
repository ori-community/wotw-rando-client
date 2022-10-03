#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Authorization {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Authorization__Class** type_info;
        inline app::Authorization__Class* get_class() {
            return il2cpp::get_class<app::Authorization__Class>(type_info, "System.Net", "Authorization");
        }
        inline app::Authorization* create() {
            return il2cpp::create_object<app::Authorization>(get_class());
        }
    } // namespace Authorization
} // namespace app::classes::types
