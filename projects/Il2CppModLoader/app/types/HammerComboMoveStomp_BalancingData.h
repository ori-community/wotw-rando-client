#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HammerComboMoveStomp_BalancingData {
        namespace {
            app::HammerComboMoveStomp_BalancingData__Class* type_info_ref = nullptr;
        }
        app::HammerComboMoveStomp_BalancingData__Class** type_info = &type_info_ref;
        inline app::HammerComboMoveStomp_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::HammerComboMoveStomp_BalancingData__Class>(type_info, "", "HammerComboMoveStomp_BalancingData");
        }
        inline app::HammerComboMoveStomp_BalancingData* create() {
            return il2cpp::create_object<app::HammerComboMoveStomp_BalancingData>(get_class());
        }
    } // namespace HammerComboMoveStomp_BalancingData
} // namespace app::classes::types
