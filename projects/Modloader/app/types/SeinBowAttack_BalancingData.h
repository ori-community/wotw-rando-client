#pragma once
#include <Modloader/app/structs/SeinBowAttack_BalancingData.h>
#include <Modloader/app/structs/SeinBowAttack_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBowAttack_BalancingData {
        inline app::SeinBowAttack_BalancingData__Class** type_info() {
            static app::SeinBowAttack_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinBowAttack_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinBowAttack_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinBowAttack_BalancingData__Class>(type_info(), "", "SeinBowAttack_BalancingData");
        }
        inline app::SeinBowAttack_BalancingData* create() {
            return il2cpp::create_object<app::SeinBowAttack_BalancingData>(get_class());
        }
    } // namespace SeinBowAttack_BalancingData
} // namespace app::classes::types
