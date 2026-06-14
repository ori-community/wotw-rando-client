#pragma once
#include <Modloader/app/structs/PlayerHoldingTorchUberStateCondition.h>
#include <Modloader/app/structs/PlayerHoldingTorchUberStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerHoldingTorchUberStateCondition {
        inline app::PlayerHoldingTorchUberStateCondition__Class** type_info() {
            static app::PlayerHoldingTorchUberStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerHoldingTorchUberStateCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerHoldingTorchUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerHoldingTorchUberStateCondition__Class>(type_info(), "", "PlayerHoldingTorchUberStateCondition");
        }
        inline app::PlayerHoldingTorchUberStateCondition* create() {
            return il2cpp::create_object<app::PlayerHoldingTorchUberStateCondition>(get_class());
        }
    } // namespace PlayerHoldingTorchUberStateCondition
} // namespace app::classes::types
