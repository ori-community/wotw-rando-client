#pragma once
#include <Modloader/app/structs/PlayerHoldingTorchCondition.h>
#include <Modloader/app/structs/PlayerHoldingTorchCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerHoldingTorchCondition {
        inline app::PlayerHoldingTorchCondition__Class** type_info() {
            static app::PlayerHoldingTorchCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerHoldingTorchCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerHoldingTorchCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerHoldingTorchCondition__Class>(type_info(), "", "PlayerHoldingTorchCondition");
        }
        inline app::PlayerHoldingTorchCondition* create() {
            return il2cpp::create_object<app::PlayerHoldingTorchCondition>(get_class());
        }
    } // namespace PlayerHoldingTorchCondition
} // namespace app::classes::types
