#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HammerComboMoveBase_BalancingData {
        namespace {
            app::HammerComboMoveBase_BalancingData__Class* type_info_ref = nullptr;
        }
        app::HammerComboMoveBase_BalancingData__Class** type_info = &type_info_ref;
        inline app::HammerComboMoveBase_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::HammerComboMoveBase_BalancingData__Class>(type_info, "", "HammerComboMoveBase_BalancingData");
        }
        inline app::HammerComboMoveBase_BalancingData* create() {
            return il2cpp::create_object<app::HammerComboMoveBase_BalancingData>(get_class());
        }
    } // namespace HammerComboMoveBase_BalancingData
} // namespace app::classes::types
