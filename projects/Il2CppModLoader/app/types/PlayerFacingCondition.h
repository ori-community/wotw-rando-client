#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerFacingCondition {
        namespace {
            app::PlayerFacingCondition__Class* type_info_ref = nullptr;
        }
        app::PlayerFacingCondition__Class** type_info = &type_info_ref;
        inline app::PlayerFacingCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayerFacingCondition__Class>(type_info, "", "PlayerFacingCondition");
        }
        inline app::PlayerFacingCondition* create() {
            return il2cpp::create_object<app::PlayerFacingCondition>(get_class());
        }
    } // namespace PlayerFacingCondition
} // namespace app::classes::types
