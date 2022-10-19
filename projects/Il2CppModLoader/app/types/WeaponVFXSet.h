#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeaponVFXSet {
        inline app::WeaponVFXSet__Class** type_info = (app::WeaponVFXSet__Class**)(modloader::win::memory::resolve_rva(0x04758D88));
        inline app::WeaponVFXSet__Class* get_class() {
            return il2cpp::get_class<app::WeaponVFXSet__Class>(type_info, "", "WeaponVFXSet");
        }
        inline app::WeaponVFXSet* create() {
            return il2cpp::create_object<app::WeaponVFXSet>(get_class());
        }
        inline app::WeaponVFXSet__Array* create_array(int size) {
            return il2cpp::array_new<app::WeaponVFXSet__Array>(get_class(), size);
        }
        inline app::WeaponVFXSet__Array* create_array(const std::vector<app::WeaponVFXSet*>& items) {
            return il2cpp::array_new<app::WeaponVFXSet__Array>(get_class(), items);
        }
    } // namespace WeaponVFXSet
} // namespace app::classes::types
