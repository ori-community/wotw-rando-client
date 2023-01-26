#pragma once
#include <Modloader/app/structs/IHomingMissileSpellAttackable__Array.h>
#include <Modloader/app/structs/IHomingMissileSpellAttackable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IHomingMissileSpellAttackable__Array {
        inline app::IHomingMissileSpellAttackable__Array__Class** type_info() {
            static app::IHomingMissileSpellAttackable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IHomingMissileSpellAttackable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IHomingMissileSpellAttackable__Array__Class* get_class() {
            return il2cpp::get_class<app::IHomingMissileSpellAttackable__Array__Class>(type_info(), "", "IHomingMissileSpellAttackable[]");
        }
        inline app::IHomingMissileSpellAttackable__Array* create() {
            return il2cpp::create_object<app::IHomingMissileSpellAttackable__Array>(get_class());
        }
    } // namespace IHomingMissileSpellAttackable__Array
} // namespace app::classes::types
