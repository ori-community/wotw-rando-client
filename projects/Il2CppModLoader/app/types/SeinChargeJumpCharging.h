#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinChargeJumpCharging {
        namespace {
            app::SeinChargeJumpCharging__Class* type_info_ref = nullptr;
        }
        app::SeinChargeJumpCharging__Class** type_info = &type_info_ref;
        inline app::SeinChargeJumpCharging__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeJumpCharging__Class>(type_info, "", "SeinChargeJumpCharging");
        }
        inline app::SeinChargeJumpCharging* create() {
            return il2cpp::create_object<app::SeinChargeJumpCharging>(get_class());
        }
    } // namespace SeinChargeJumpCharging
} // namespace app::classes::types
