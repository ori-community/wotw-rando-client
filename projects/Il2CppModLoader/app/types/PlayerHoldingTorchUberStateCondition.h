#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerHoldingTorchUberStateCondition {
        namespace {
            app::PlayerHoldingTorchUberStateCondition__Class* type_info_ref = nullptr;
        }
        app::PlayerHoldingTorchUberStateCondition__Class** type_info = &type_info_ref;
        inline app::PlayerHoldingTorchUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerHoldingTorchUberStateCondition__Class>(type_info, "", "PlayerHoldingTorchUberStateCondition");
        }
        inline app::PlayerHoldingTorchUberStateCondition* create() {
            return il2cpp::create_object<app::PlayerHoldingTorchUberStateCondition>(get_class());
        }
    } // namespace PlayerHoldingTorchUberStateCondition
} // namespace app::classes::types
