#pragma once
#include <Modloader/app/structs/SeinGrenadeAttack_BalancingData.h>
#include <Modloader/app/structs/SeinGrenadeAttack_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrenadeAttack_BalancingData {
        inline app::SeinGrenadeAttack_BalancingData__Class** type_info() {
            static app::SeinGrenadeAttack_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrenadeAttack_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrenadeAttack_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinGrenadeAttack_BalancingData__Class>(type_info(), "", "SeinGrenadeAttack_BalancingData");
        }
        inline app::SeinGrenadeAttack_BalancingData* create() {
            return il2cpp::create_object<app::SeinGrenadeAttack_BalancingData>(get_class());
        }
    } // namespace SeinGrenadeAttack_BalancingData
} // namespace app::classes::types
