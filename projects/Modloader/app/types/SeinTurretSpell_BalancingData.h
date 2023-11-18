#pragma once
#include <Modloader/app/structs/SeinTurretSpell_BalancingData.h>
#include <Modloader/app/structs/SeinTurretSpell_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinTurretSpell_BalancingData {
        inline app::SeinTurretSpell_BalancingData__Class** type_info() {
            static app::SeinTurretSpell_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinTurretSpell_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinTurretSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinTurretSpell_BalancingData__Class>(type_info(), "", "SeinTurretSpell_BalancingData");
        }
        inline app::SeinTurretSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinTurretSpell_BalancingData>(get_class());
        }
    } // namespace SeinTurretSpell_BalancingData
} // namespace app::classes::types
