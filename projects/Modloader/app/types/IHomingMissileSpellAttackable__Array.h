#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IHomingMissileSpellAttackable__Array {
        namespace {
            inline app::IHomingMissileSpellAttackable__Array__Class* type_info_ref = nullptr;
        }
        inline app::IHomingMissileSpellAttackable__Array__Class** type_info = &type_info_ref;
        inline app::IHomingMissileSpellAttackable__Array__Class* get_class() {
            return il2cpp::get_class<app::IHomingMissileSpellAttackable__Array__Class>(type_info, "", "IHomingMissileSpellAttackable[]");
        }
        inline app::IHomingMissileSpellAttackable__Array* create() {
            return il2cpp::create_object<app::IHomingMissileSpellAttackable__Array>(get_class());
        }
    } // namespace IHomingMissileSpellAttackable__Array
} // namespace app::classes::types
