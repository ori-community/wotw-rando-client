#pragma once
#include <Modloader/app/structs/PlayerFacingCondition_FacingCondition__Enum.h>
#include <Modloader/app/structs/PlayerFacingCondition_FacingCondition__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerFacingCondition_FacingCondition__Enum {
        inline app::PlayerFacingCondition_FacingCondition__Enum__Class** type_info() {
            static app::PlayerFacingCondition_FacingCondition__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerFacingCondition_FacingCondition__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerFacingCondition_FacingCondition__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerFacingCondition_FacingCondition__Enum__Class>(type_info(), "", "PlayerFacingCondition", "FacingCondition");
        }
        inline app::PlayerFacingCondition_FacingCondition__Enum* create() {
            return il2cpp::create_object<app::PlayerFacingCondition_FacingCondition__Enum>(get_class());
        }
    } // namespace PlayerFacingCondition_FacingCondition__Enum
} // namespace app::classes::types
