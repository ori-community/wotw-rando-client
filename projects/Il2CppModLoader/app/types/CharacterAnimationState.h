#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationState {
        namespace {
            app::CharacterAnimationState__Class* type_info_ref = nullptr;
        }
        app::CharacterAnimationState__Class** type_info = &type_info_ref;
        inline app::CharacterAnimationState__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationState__Class>(type_info, "", "CharacterAnimationState");
        }
        inline app::CharacterAnimationState* create() {
            return il2cpp::create_object<app::CharacterAnimationState>(get_class());
        }
    } // namespace CharacterAnimationState
} // namespace app::classes::types
