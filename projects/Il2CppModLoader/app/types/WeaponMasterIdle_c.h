#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeaponMasterIdle_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WeaponMasterIdle_c__Class** type_info;
        inline app::WeaponMasterIdle_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WeaponMasterIdle_c__Class>(type_info, "", "WeaponMasterIdle", "<>c");
        }
        inline app::WeaponMasterIdle_c* create() {
            return il2cpp::create_object<app::WeaponMasterIdle_c>(get_class());
        }
    } // namespace WeaponMasterIdle_c
} // namespace app::classes::types
