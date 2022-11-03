#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharacterAnimationSystem_CharacterAnimationState__Array {
        namespace {
            inline app::CharacterAnimationSystem_CharacterAnimationState__Array__Class* type_info_ref = nullptr;
        }
        inline app::CharacterAnimationSystem_CharacterAnimationState__Array__Class** type_info = &type_info_ref;
        inline app::CharacterAnimationSystem_CharacterAnimationState__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationSystem_CharacterAnimationState__Array__Class>(type_info, "", "CharacterAnimationSystem+CharacterAnimationState[]");
        }
        inline app::CharacterAnimationSystem_CharacterAnimationState__Array* create() {
            return il2cpp::create_object<app::CharacterAnimationSystem_CharacterAnimationState__Array>(get_class());
        }
    } // namespace CharacterAnimationSystem_CharacterAnimationState__Array
} // namespace app::classes::types
