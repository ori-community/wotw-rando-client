#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeaponMasterEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WeaponMasterEntity__Class** type_info;
        inline app::WeaponMasterEntity__Class* get_class() {
            return il2cpp::get_class<app::WeaponMasterEntity__Class>(type_info, "", "WeaponMasterEntity");
        }
        inline app::WeaponMasterEntity* create() {
            return il2cpp::create_object<app::WeaponMasterEntity>(get_class());
        }
    } // namespace WeaponMasterEntity
} // namespace app::classes::types
