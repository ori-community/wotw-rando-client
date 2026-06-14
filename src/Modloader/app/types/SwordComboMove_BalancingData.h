#pragma once
#include <Modloader/app/structs/SwordComboMove_BalancingData.h>
#include <Modloader/app/structs/SwordComboMove_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwordComboMove_BalancingData {
        inline app::SwordComboMove_BalancingData__Class** type_info() {
            static app::SwordComboMove_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwordComboMove_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwordComboMove_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SwordComboMove_BalancingData__Class>(type_info(), "", "SwordComboMove_BalancingData");
        }
        inline app::SwordComboMove_BalancingData* create() {
            return il2cpp::create_object<app::SwordComboMove_BalancingData>(get_class());
        }
    } // namespace SwordComboMove_BalancingData
} // namespace app::classes::types
