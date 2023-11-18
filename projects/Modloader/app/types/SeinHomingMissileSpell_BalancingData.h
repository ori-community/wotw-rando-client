#pragma once
#include <Modloader/app/structs/SeinHomingMissileSpell_BalancingData.h>
#include <Modloader/app/structs/SeinHomingMissileSpell_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHomingMissileSpell_BalancingData {
        inline app::SeinHomingMissileSpell_BalancingData__Class** type_info() {
            static app::SeinHomingMissileSpell_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinHomingMissileSpell_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinHomingMissileSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinHomingMissileSpell_BalancingData__Class>(type_info(), "", "SeinHomingMissileSpell_BalancingData");
        }
        inline app::SeinHomingMissileSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinHomingMissileSpell_BalancingData>(get_class());
        }
    } // namespace SeinHomingMissileSpell_BalancingData
} // namespace app::classes::types
