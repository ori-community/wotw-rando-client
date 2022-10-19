#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HammerComboMoveChargable_BalancingData {
        namespace {
            inline app::HammerComboMoveChargable_BalancingData__Class* type_info_ref = nullptr;
        }
        inline app::HammerComboMoveChargable_BalancingData__Class** type_info = &type_info_ref;
        inline app::HammerComboMoveChargable_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::HammerComboMoveChargable_BalancingData__Class>(type_info, "", "HammerComboMoveChargable_BalancingData");
        }
        inline app::HammerComboMoveChargable_BalancingData* create() {
            return il2cpp::create_object<app::HammerComboMoveChargable_BalancingData>(get_class());
        }
    } // namespace HammerComboMoveChargable_BalancingData
} // namespace app::classes::types
