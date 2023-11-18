#pragma once
#include <Modloader/app/structs/PlayerIsNotDiggingCondition.h>
#include <Modloader/app/structs/PlayerIsNotDiggingCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerIsNotDiggingCondition {
        inline app::PlayerIsNotDiggingCondition__Class** type_info() {
            static app::PlayerIsNotDiggingCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerIsNotDiggingCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerIsNotDiggingCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerIsNotDiggingCondition__Class>(type_info(), "", "PlayerIsNotDiggingCondition");
        }
        inline app::PlayerIsNotDiggingCondition* create() {
            return il2cpp::create_object<app::PlayerIsNotDiggingCondition>(get_class());
        }
    } // namespace PlayerIsNotDiggingCondition
} // namespace app::classes::types
