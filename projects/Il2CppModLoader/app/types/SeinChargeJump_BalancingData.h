#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinChargeJump_BalancingData {
        namespace {
            inline app::SeinChargeJump_BalancingData__Class* type_info_ref = nullptr;
        }
        inline app::SeinChargeJump_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinChargeJump_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeJump_BalancingData__Class>(type_info, "", "SeinChargeJump_BalancingData");
        }
        inline app::SeinChargeJump_BalancingData* create() {
            return il2cpp::create_object<app::SeinChargeJump_BalancingData>(get_class());
        }
    } // namespace SeinChargeJump_BalancingData
} // namespace app::classes::types
