#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinHomingMissileSpell_BalancingData {
        namespace {
            app::SeinHomingMissileSpell_BalancingData__Class* type_info_ref = nullptr;
        }
        app::SeinHomingMissileSpell_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinHomingMissileSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinHomingMissileSpell_BalancingData__Class>(type_info, "", "SeinHomingMissileSpell_BalancingData");
        }
        inline app::SeinHomingMissileSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinHomingMissileSpell_BalancingData>(get_class());
        }
    } // namespace SeinHomingMissileSpell_BalancingData
} // namespace app::classes::types
