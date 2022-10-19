#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeWeapon {
        inline app::MeleeWeapon__Class** type_info = (app::MeleeWeapon__Class**)(modloader::win::memory::resolve_rva(0x04774348));
        inline app::MeleeWeapon__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeapon__Class>(type_info, "", "MeleeWeapon");
        }
        inline app::MeleeWeapon* create() {
            return il2cpp::create_object<app::MeleeWeapon>(get_class());
        }
        inline app::MeleeWeapon__Array* create_array(int size) {
            return il2cpp::array_new<app::MeleeWeapon__Array>(get_class(), size);
        }
        inline app::MeleeWeapon__Array* create_array(const std::vector<app::MeleeWeapon*>& items) {
            return il2cpp::array_new<app::MeleeWeapon__Array>(get_class(), items);
        }
    } // namespace MeleeWeapon
} // namespace app::classes::types
