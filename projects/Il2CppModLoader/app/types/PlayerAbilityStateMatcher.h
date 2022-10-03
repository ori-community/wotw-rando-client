#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerAbilityStateMatcher {
        namespace {
            app::PlayerAbilityStateMatcher__Class* type_info_ref = nullptr;
        }
        app::PlayerAbilityStateMatcher__Class** type_info = &type_info_ref;
        inline app::PlayerAbilityStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::PlayerAbilityStateMatcher__Class>(type_info, "", "PlayerAbilityStateMatcher");
        }
        inline app::PlayerAbilityStateMatcher* create() {
            return il2cpp::create_object<app::PlayerAbilityStateMatcher>(get_class());
        }
    } // namespace PlayerAbilityStateMatcher
} // namespace app::classes::types
