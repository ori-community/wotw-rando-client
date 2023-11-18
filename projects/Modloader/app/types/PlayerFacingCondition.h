#pragma once
#include <Modloader/app/structs/PlayerFacingCondition.h>
#include <Modloader/app/structs/PlayerFacingCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerFacingCondition {
        inline app::PlayerFacingCondition__Class** type_info() {
            static app::PlayerFacingCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerFacingCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerFacingCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerFacingCondition__Class>(type_info(), "", "PlayerFacingCondition");
        }
        inline app::PlayerFacingCondition* create() {
            return il2cpp::create_object<app::PlayerFacingCondition>(get_class());
        }
    } // namespace PlayerFacingCondition
} // namespace app::classes::types
