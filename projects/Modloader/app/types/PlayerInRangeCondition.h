#pragma once
#include <Modloader/app/structs/PlayerInRangeCondition.h>
#include <Modloader/app/structs/PlayerInRangeCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerInRangeCondition {
        inline app::PlayerInRangeCondition__Class** type_info() {
            static app::PlayerInRangeCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerInRangeCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerInRangeCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerInRangeCondition__Class>(type_info(), "fsm", "PlayerInRangeCondition");
        }
        inline app::PlayerInRangeCondition* create() {
            return il2cpp::create_object<app::PlayerInRangeCondition>(get_class());
        }
    } // namespace PlayerInRangeCondition
} // namespace app::classes::types
