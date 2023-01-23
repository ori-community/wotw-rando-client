#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerHoldingLarvaCondition__Class.h>
#include <Modloader/app/structs/PlayerHoldingLarvaCondition.h>

namespace app::classes::types {
    namespace PlayerHoldingLarvaCondition {
        namespace {
            inline app::PlayerHoldingLarvaCondition__Class* type_info_ref = nullptr;
        }
        inline app::PlayerHoldingLarvaCondition__Class** type_info = &type_info_ref;
        inline app::PlayerHoldingLarvaCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerHoldingLarvaCondition__Class>(type_info, "", "PlayerHoldingLarvaCondition");
        }
        inline app::PlayerHoldingLarvaCondition* create() {
            return il2cpp::create_object<app::PlayerHoldingLarvaCondition>(get_class());
        }
    } // namespace PlayerHoldingLarvaCondition
} // namespace app::classes::types
