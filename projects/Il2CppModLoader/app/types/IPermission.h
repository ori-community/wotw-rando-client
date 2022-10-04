#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPermission {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPermission__Class** type_info;
        inline app::IPermission__Class* get_class() {
            return il2cpp::get_class<app::IPermission__Class>(type_info, "System.Security", "IPermission");
        }
        inline app::IPermission* create() {
            return il2cpp::create_object<app::IPermission>(get_class());
        }
    } // namespace IPermission
} // namespace app::classes::types
