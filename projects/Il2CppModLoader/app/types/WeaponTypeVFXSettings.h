#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeaponTypeVFXSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WeaponTypeVFXSettings__Class** type_info;
        inline app::WeaponTypeVFXSettings__Class* get_class() {
            return il2cpp::get_class<app::WeaponTypeVFXSettings__Class>(type_info, "", "WeaponTypeVFXSettings");
        }
        inline app::WeaponTypeVFXSettings* create() {
            return il2cpp::create_object<app::WeaponTypeVFXSettings>(get_class());
        }
    } // namespace WeaponTypeVFXSettings
} // namespace app::classes::types
