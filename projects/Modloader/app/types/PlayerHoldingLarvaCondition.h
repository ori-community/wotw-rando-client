#pragma once
#include <Modloader/app/structs/PlayerHoldingLarvaCondition.h>
#include <Modloader/app/structs/PlayerHoldingLarvaCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerHoldingLarvaCondition {
        inline app::PlayerHoldingLarvaCondition__Class** type_info() {
            static app::PlayerHoldingLarvaCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerHoldingLarvaCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerHoldingLarvaCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerHoldingLarvaCondition__Class>(type_info(), "", "PlayerHoldingLarvaCondition");
        }
        inline app::PlayerHoldingLarvaCondition* create() {
            return il2cpp::create_object<app::PlayerHoldingLarvaCondition>(get_class());
        }
    } // namespace PlayerHoldingLarvaCondition
} // namespace app::classes::types
