#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeaponmasterItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WeaponmasterItem__Class** type_info;
        inline app::WeaponmasterItem__Class* get_class() {
            return il2cpp::get_class<app::WeaponmasterItem__Class>(type_info, "", "WeaponmasterItem");
        }
        inline app::WeaponmasterItem* create() {
            return il2cpp::create_object<app::WeaponmasterItem>(get_class());
        }
        inline app::WeaponmasterItem__Array* create_array(int size) {
            return il2cpp::array_new<app::WeaponmasterItem__Array>(get_class(), size);
        }
    } // namespace WeaponmasterItem
} // namespace app::classes::types
