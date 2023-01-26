#pragma once
#include <Modloader/app/structs/HammerComboMove_BalancingData.h>
#include <Modloader/app/structs/HammerComboMove_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HammerComboMove_BalancingData {
        inline app::HammerComboMove_BalancingData__Class** type_info() {
            static app::HammerComboMove_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HammerComboMove_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HammerComboMove_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::HammerComboMove_BalancingData__Class>(type_info(), "", "HammerComboMove_BalancingData");
        }
        inline app::HammerComboMove_BalancingData* create() {
            return il2cpp::create_object<app::HammerComboMove_BalancingData>(get_class());
        }
    } // namespace HammerComboMove_BalancingData
} // namespace app::classes::types
