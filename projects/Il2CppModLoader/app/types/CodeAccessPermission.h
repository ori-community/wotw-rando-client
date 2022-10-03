#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CodeAccessPermission {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CodeAccessPermission__Class** type_info;
        inline app::CodeAccessPermission__Class* get_class() {
            return il2cpp::get_class<app::CodeAccessPermission__Class>(type_info, "System.Security", "CodeAccessPermission");
        }
        inline app::CodeAccessPermission* create() {
            return il2cpp::create_object<app::CodeAccessPermission>(get_class());
        }
    } // namespace CodeAccessPermission
} // namespace app::classes::types
