#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwordComboMove_BalancingData {
        namespace {
            inline app::SwordComboMove_BalancingData__Class* type_info_ref = nullptr;
        }
        inline app::SwordComboMove_BalancingData__Class** type_info = &type_info_ref;
        inline app::SwordComboMove_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SwordComboMove_BalancingData__Class>(type_info, "", "SwordComboMove_BalancingData");
        }
        inline app::SwordComboMove_BalancingData* create() {
            return il2cpp::create_object<app::SwordComboMove_BalancingData>(get_class());
        }
    } // namespace SwordComboMove_BalancingData
} // namespace app::classes::types
