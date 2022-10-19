#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGrenadeAttack_BalancingData {
        namespace {
            inline app::SeinGrenadeAttack_BalancingData__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrenadeAttack_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinGrenadeAttack_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinGrenadeAttack_BalancingData__Class>(type_info, "", "SeinGrenadeAttack_BalancingData");
        }
        inline app::SeinGrenadeAttack_BalancingData* create() {
            return il2cpp::create_object<app::SeinGrenadeAttack_BalancingData>(get_class());
        }
    } // namespace SeinGrenadeAttack_BalancingData
} // namespace app::classes::types
