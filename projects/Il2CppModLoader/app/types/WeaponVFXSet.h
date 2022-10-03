#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeaponVFXSet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WeaponVFXSet__Class** type_info;
        inline app::WeaponVFXSet__Class* get_class() {
            return il2cpp::get_class<app::WeaponVFXSet__Class>(type_info, "", "WeaponVFXSet");
        }
        inline app::WeaponVFXSet* create() {
            return il2cpp::create_object<app::WeaponVFXSet>(get_class());
        }
        inline app::WeaponVFXSet__Array* create_array(int size) {
            return il2cpp::array_new<app::WeaponVFXSet__Array>(get_class(), size);
        }
    } // namespace WeaponVFXSet
} // namespace app::classes::types
