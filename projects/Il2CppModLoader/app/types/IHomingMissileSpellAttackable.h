#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IHomingMissileSpellAttackable {
        namespace {
            app::IHomingMissileSpellAttackable__Class* type_info_ref = nullptr;
        }
        app::IHomingMissileSpellAttackable__Class** type_info = &type_info_ref;
        inline app::IHomingMissileSpellAttackable__Class* get_class() {
            return il2cpp::get_class<app::IHomingMissileSpellAttackable__Class>(type_info, "", "IHomingMissileSpellAttackable");
        }
        inline app::IHomingMissileSpellAttackable* create() {
            return il2cpp::create_object<app::IHomingMissileSpellAttackable>(get_class());
        }
        inline app::IHomingMissileSpellAttackable__Array* create_array(int size) {
            return il2cpp::array_new<app::IHomingMissileSpellAttackable__Array>(get_class(), size);
        }
    } // namespace IHomingMissileSpellAttackable
} // namespace app::classes::types
