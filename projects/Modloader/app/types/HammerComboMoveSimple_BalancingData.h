#pragma once
#include <Modloader/app/structs/HammerComboMoveSimple_BalancingData.h>
#include <Modloader/app/structs/HammerComboMoveSimple_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HammerComboMoveSimple_BalancingData {
        inline app::HammerComboMoveSimple_BalancingData__Class** type_info() {
            static app::HammerComboMoveSimple_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HammerComboMoveSimple_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HammerComboMoveSimple_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::HammerComboMoveSimple_BalancingData__Class>(type_info(), "", "HammerComboMoveSimple_BalancingData");
        }
        inline app::HammerComboMoveSimple_BalancingData* create() {
            return il2cpp::create_object<app::HammerComboMoveSimple_BalancingData>(get_class());
        }
    } // namespace HammerComboMoveSimple_BalancingData
} // namespace app::classes::types
