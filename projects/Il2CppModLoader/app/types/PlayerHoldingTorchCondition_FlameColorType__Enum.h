#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerHoldingTorchCondition_FlameColorType__Enum {
        namespace {
            app::PlayerHoldingTorchCondition_FlameColorType__Enum__Class* type_info_ref = nullptr;
        }
        app::PlayerHoldingTorchCondition_FlameColorType__Enum__Class** type_info = &type_info_ref;
        inline app::PlayerHoldingTorchCondition_FlameColorType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerHoldingTorchCondition_FlameColorType__Enum__Class>(type_info, "", "PlayerHoldingTorchCondition", "FlameColorType");
        }
        inline app::PlayerHoldingTorchCondition_FlameColorType__Enum* create() {
            return il2cpp::create_object<app::PlayerHoldingTorchCondition_FlameColorType__Enum>(get_class());
        }
    } // namespace PlayerHoldingTorchCondition_FlameColorType__Enum
} // namespace app::classes::types
