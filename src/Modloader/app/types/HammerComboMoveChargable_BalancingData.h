#pragma once
#include <Modloader/app/structs/HammerComboMoveChargable_BalancingData.h>
#include <Modloader/app/structs/HammerComboMoveChargable_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HammerComboMoveChargable_BalancingData {
        inline app::HammerComboMoveChargable_BalancingData__Class** type_info() {
            static app::HammerComboMoveChargable_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HammerComboMoveChargable_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HammerComboMoveChargable_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::HammerComboMoveChargable_BalancingData__Class>(type_info(), "", "HammerComboMoveChargable_BalancingData");
        }
        inline app::HammerComboMoveChargable_BalancingData* create() {
            return il2cpp::create_object<app::HammerComboMoveChargable_BalancingData>(get_class());
        }
    } // namespace HammerComboMoveChargable_BalancingData
} // namespace app::classes::types
