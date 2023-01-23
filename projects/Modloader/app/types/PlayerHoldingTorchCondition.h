#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerHoldingTorchCondition__Class.h>
#include <Modloader/app/structs/PlayerHoldingTorchCondition.h>

namespace app::classes::types {
    namespace PlayerHoldingTorchCondition {
        namespace {
            inline app::PlayerHoldingTorchCondition__Class* type_info_ref = nullptr;
        }
        inline app::PlayerHoldingTorchCondition__Class** type_info = &type_info_ref;
        inline app::PlayerHoldingTorchCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerHoldingTorchCondition__Class>(type_info, "", "PlayerHoldingTorchCondition");
        }
        inline app::PlayerHoldingTorchCondition* create() {
            return il2cpp::create_object<app::PlayerHoldingTorchCondition>(get_class());
        }
    } // namespace PlayerHoldingTorchCondition
} // namespace app::classes::types
