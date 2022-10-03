#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecureString {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SecureString__Class** type_info;
        inline app::SecureString__Class* get_class() {
            return il2cpp::get_class<app::SecureString__Class>(type_info, "System.Security", "SecureString");
        }
        inline app::SecureString* create() {
            return il2cpp::create_object<app::SecureString>(get_class());
        }
    } // namespace SecureString
} // namespace app::classes::types
