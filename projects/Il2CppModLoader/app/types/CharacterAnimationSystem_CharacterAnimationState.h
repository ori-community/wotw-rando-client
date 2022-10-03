#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationSystem_CharacterAnimationState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterAnimationSystem_CharacterAnimationState__Class** type_info;
        inline app::CharacterAnimationSystem_CharacterAnimationState__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterAnimationSystem_CharacterAnimationState__Class>(type_info, "", "CharacterAnimationSystem", "CharacterAnimationState");
        }
        inline app::CharacterAnimationSystem_CharacterAnimationState* create() {
            return il2cpp::create_object<app::CharacterAnimationSystem_CharacterAnimationState>(get_class());
        }
        inline app::CharacterAnimationSystem_CharacterAnimationState__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterAnimationSystem_CharacterAnimationState__Array>(get_class(), size);
        }
    } // namespace CharacterAnimationSystem_CharacterAnimationState
} // namespace app::classes::types
