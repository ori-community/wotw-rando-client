#pragma once
#include <Modloader/app/structs/CharacterAnimationSystem_CharacterAnimationState__Array.h>
#include <Modloader/app/structs/CharacterAnimationSystem_CharacterAnimationState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationSystem_CharacterAnimationState__Array {
        inline app::CharacterAnimationSystem_CharacterAnimationState__Array__Class** type_info() {
            static app::CharacterAnimationSystem_CharacterAnimationState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterAnimationSystem_CharacterAnimationState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterAnimationSystem_CharacterAnimationState__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationSystem_CharacterAnimationState__Array__Class>(type_info(), "", "CharacterAnimationSystem+CharacterAnimationState[]");
        }
        inline app::CharacterAnimationSystem_CharacterAnimationState__Array* create() {
            return il2cpp::create_object<app::CharacterAnimationSystem_CharacterAnimationState__Array>(get_class());
        }
    } // namespace CharacterAnimationSystem_CharacterAnimationState__Array
} // namespace app::classes::types
