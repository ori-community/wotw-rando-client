#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerHoldingTorchUberStateCondition__Class.h>
#include <Modloader/app/structs/PlayerHoldingTorchUberStateCondition.h>

namespace app::classes::types {
    namespace PlayerHoldingTorchUberStateCondition {
        namespace {
            inline app::PlayerHoldingTorchUberStateCondition__Class* type_info_ref = nullptr;
        }
        inline app::PlayerHoldingTorchUberStateCondition__Class** type_info = &type_info_ref;
        inline app::PlayerHoldingTorchUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerHoldingTorchUberStateCondition__Class>(type_info, "", "PlayerHoldingTorchUberStateCondition");
        }
        inline app::PlayerHoldingTorchUberStateCondition* create() {
            return il2cpp::create_object<app::PlayerHoldingTorchUberStateCondition>(get_class());
        }
    } // namespace PlayerHoldingTorchUberStateCondition
} // namespace app::classes::types
