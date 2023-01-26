#pragma once
#include <Modloader/app/structs/HammerComboMoveBase_BalancingData.h>
#include <Modloader/app/structs/HammerComboMoveBase_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HammerComboMoveBase_BalancingData {
        inline app::HammerComboMoveBase_BalancingData__Class** type_info() {
            static app::HammerComboMoveBase_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HammerComboMoveBase_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HammerComboMoveBase_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::HammerComboMoveBase_BalancingData__Class>(type_info(), "", "HammerComboMoveBase_BalancingData");
        }
        inline app::HammerComboMoveBase_BalancingData* create() {
            return il2cpp::create_object<app::HammerComboMoveBase_BalancingData>(get_class());
        }
    } // namespace HammerComboMoveBase_BalancingData
} // namespace app::classes::types
