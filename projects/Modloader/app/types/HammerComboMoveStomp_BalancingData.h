#pragma once
#include <Modloader/app/structs/HammerComboMoveStomp_BalancingData.h>
#include <Modloader/app/structs/HammerComboMoveStomp_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HammerComboMoveStomp_BalancingData {
        inline app::HammerComboMoveStomp_BalancingData__Class** type_info() {
            static app::HammerComboMoveStomp_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HammerComboMoveStomp_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HammerComboMoveStomp_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::HammerComboMoveStomp_BalancingData__Class>(type_info(), "", "HammerComboMoveStomp_BalancingData");
        }
        inline app::HammerComboMoveStomp_BalancingData* create() {
            return il2cpp::create_object<app::HammerComboMoveStomp_BalancingData>(get_class());
        }
    } // namespace HammerComboMoveStomp_BalancingData
} // namespace app::classes::types
