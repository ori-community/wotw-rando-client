#pragma once
#include <Modloader/app/structs/CharacterAnimationStateBase__Array.h>
#include <Modloader/app/structs/CharacterAnimationStateBase__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationStateBase__Array {
        inline app::CharacterAnimationStateBase__Array__Class** type_info() {
            static app::CharacterAnimationStateBase__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterAnimationStateBase__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterAnimationStateBase__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationStateBase__Array__Class>(type_info(), "", "CharacterAnimationStateBase[]");
        }
        inline app::CharacterAnimationStateBase__Array* create() {
            return il2cpp::create_object<app::CharacterAnimationStateBase__Array>(get_class());
        }
    } // namespace CharacterAnimationStateBase__Array
} // namespace app::classes::types
