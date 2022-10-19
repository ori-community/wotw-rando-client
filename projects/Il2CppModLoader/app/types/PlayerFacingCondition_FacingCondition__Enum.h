#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerFacingCondition_FacingCondition__Enum {
        namespace {
            inline app::PlayerFacingCondition_FacingCondition__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PlayerFacingCondition_FacingCondition__Enum__Class** type_info = &type_info_ref;
        inline app::PlayerFacingCondition_FacingCondition__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerFacingCondition_FacingCondition__Enum__Class>(type_info, "", "PlayerFacingCondition", "FacingCondition");
        }
        inline app::PlayerFacingCondition_FacingCondition__Enum* create() {
            return il2cpp::create_object<app::PlayerFacingCondition_FacingCondition__Enum>(get_class());
        }
    } // namespace PlayerFacingCondition_FacingCondition__Enum
} // namespace app::classes::types
