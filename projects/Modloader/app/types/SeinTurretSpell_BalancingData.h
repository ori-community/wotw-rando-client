#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinTurretSpell_BalancingData {
        namespace {
            inline app::SeinTurretSpell_BalancingData__Class* type_info_ref = nullptr;
        }
        inline app::SeinTurretSpell_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinTurretSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinTurretSpell_BalancingData__Class>(type_info, "", "SeinTurretSpell_BalancingData");
        }
        inline app::SeinTurretSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinTurretSpell_BalancingData>(get_class());
        }
    } // namespace SeinTurretSpell_BalancingData
} // namespace app::classes::types
