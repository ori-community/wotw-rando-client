#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerHoldingTorchCondition_FlameColorType__Enum {
        namespace {
            inline app::PlayerHoldingTorchCondition_FlameColorType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PlayerHoldingTorchCondition_FlameColorType__Enum__Class** type_info = &type_info_ref;
        inline app::PlayerHoldingTorchCondition_FlameColorType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerHoldingTorchCondition_FlameColorType__Enum__Class>(type_info, "", "PlayerHoldingTorchCondition", "FlameColorType");
        }
        inline app::PlayerHoldingTorchCondition_FlameColorType__Enum* create() {
            return il2cpp::create_object<app::PlayerHoldingTorchCondition_FlameColorType__Enum>(get_class());
        }
    } // namespace PlayerHoldingTorchCondition_FlameColorType__Enum
} // namespace app::classes::types
