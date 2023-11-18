#pragma once
#include <Modloader/app/structs/SeinChargeJumpCharging.h>
#include <Modloader/app/structs/SeinChargeJumpCharging__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChargeJumpCharging {
        inline app::SeinChargeJumpCharging__Class** type_info() {
            static app::SeinChargeJumpCharging__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinChargeJumpCharging__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinChargeJumpCharging__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeJumpCharging__Class>(type_info(), "", "SeinChargeJumpCharging");
        }
        inline app::SeinChargeJumpCharging* create() {
            return il2cpp::create_object<app::SeinChargeJumpCharging>(get_class());
        }
    } // namespace SeinChargeJumpCharging
} // namespace app::classes::types
