#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBowAttack_BalancingData {
        namespace {
            app::SeinBowAttack_BalancingData__Class* type_info_ref = nullptr;
        }
        app::SeinBowAttack_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinBowAttack_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinBowAttack_BalancingData__Class>(type_info, "", "SeinBowAttack_BalancingData");
        }
        inline app::SeinBowAttack_BalancingData* create() {
            return il2cpp::create_object<app::SeinBowAttack_BalancingData>(get_class());
        }
    } // namespace SeinBowAttack_BalancingData
} // namespace app::classes::types
