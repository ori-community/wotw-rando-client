#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HammerComboMove_BalancingData {
        namespace {
            inline app::HammerComboMove_BalancingData__Class* type_info_ref = nullptr;
        }
        inline app::HammerComboMove_BalancingData__Class** type_info = &type_info_ref;
        inline app::HammerComboMove_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::HammerComboMove_BalancingData__Class>(type_info, "", "HammerComboMove_BalancingData");
        }
        inline app::HammerComboMove_BalancingData* create() {
            return il2cpp::create_object<app::HammerComboMove_BalancingData>(get_class());
        }
    } // namespace HammerComboMove_BalancingData
} // namespace app::classes::types
