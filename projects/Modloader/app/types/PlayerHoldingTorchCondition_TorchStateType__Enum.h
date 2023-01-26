#pragma once
#include <Modloader/app/structs/PlayerHoldingTorchCondition_TorchStateType__Enum.h>
#include <Modloader/app/structs/PlayerHoldingTorchCondition_TorchStateType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerHoldingTorchCondition_TorchStateType__Enum {
        inline app::PlayerHoldingTorchCondition_TorchStateType__Enum__Class** type_info() {
            static app::PlayerHoldingTorchCondition_TorchStateType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerHoldingTorchCondition_TorchStateType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerHoldingTorchCondition_TorchStateType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerHoldingTorchCondition_TorchStateType__Enum__Class>(type_info(), "", "PlayerHoldingTorchCondition", "TorchStateType");
        }
        inline app::PlayerHoldingTorchCondition_TorchStateType__Enum* create() {
            return il2cpp::create_object<app::PlayerHoldingTorchCondition_TorchStateType__Enum>(get_class());
        }
    } // namespace PlayerHoldingTorchCondition_TorchStateType__Enum
} // namespace app::classes::types
