#pragma once
#include <Modloader/app/structs/SeinChargeJump_BalancingData.h>
#include <Modloader/app/structs/SeinChargeJump_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChargeJump_BalancingData {
        inline app::SeinChargeJump_BalancingData__Class** type_info() {
            static app::SeinChargeJump_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinChargeJump_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinChargeJump_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeJump_BalancingData__Class>(type_info(), "", "SeinChargeJump_BalancingData");
        }
        inline app::SeinChargeJump_BalancingData* create() {
            return il2cpp::create_object<app::SeinChargeJump_BalancingData>(get_class());
        }
    } // namespace SeinChargeJump_BalancingData
} // namespace app::classes::types
