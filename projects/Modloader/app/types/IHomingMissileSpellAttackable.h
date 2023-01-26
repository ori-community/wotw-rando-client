#pragma once
#include <Modloader/app/structs/IHomingMissileSpellAttackable.h>
#include <Modloader/app/structs/IHomingMissileSpellAttackable__Array.h>
#include <Modloader/app/structs/IHomingMissileSpellAttackable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IHomingMissileSpellAttackable {
        inline app::IHomingMissileSpellAttackable__Class** type_info() {
            static app::IHomingMissileSpellAttackable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IHomingMissileSpellAttackable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IHomingMissileSpellAttackable__Class* get_class() {
            return il2cpp::get_class<app::IHomingMissileSpellAttackable__Class>(type_info(), "", "IHomingMissileSpellAttackable");
        }
        inline app::IHomingMissileSpellAttackable__Array* create_array(int size) {
            return il2cpp::array_new<app::IHomingMissileSpellAttackable__Array>(get_class(), size);
        }
        inline app::IHomingMissileSpellAttackable__Array* create_array(const std::vector<app::IHomingMissileSpellAttackable*>& items) {
            return il2cpp::array_new<app::IHomingMissileSpellAttackable__Array>(get_class(), items);
        }
    } // namespace IHomingMissileSpellAttackable
} // namespace app::classes::types
