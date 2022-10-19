#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerHoldingTorchCondition_TorchStateType__Enum {
        namespace {
            inline app::PlayerHoldingTorchCondition_TorchStateType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PlayerHoldingTorchCondition_TorchStateType__Enum__Class** type_info = &type_info_ref;
        inline app::PlayerHoldingTorchCondition_TorchStateType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerHoldingTorchCondition_TorchStateType__Enum__Class>(type_info, "", "PlayerHoldingTorchCondition", "TorchStateType");
        }
        inline app::PlayerHoldingTorchCondition_TorchStateType__Enum* create() {
            return il2cpp::create_object<app::PlayerHoldingTorchCondition_TorchStateType__Enum>(get_class());
        }
    } // namespace PlayerHoldingTorchCondition_TorchStateType__Enum
} // namespace app::classes::types
