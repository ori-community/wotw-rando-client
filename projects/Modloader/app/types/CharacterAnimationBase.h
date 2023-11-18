#pragma once
#include <Modloader/app/structs/CharacterAnimationBase.h>
#include <Modloader/app/structs/CharacterAnimationBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationBase {
        inline app::CharacterAnimationBase__Class** type_info() {
            static app::CharacterAnimationBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterAnimationBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterAnimationBase__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationBase__Class>(type_info(), "RootMotion.Demos", "CharacterAnimationBase");
        }
        inline app::CharacterAnimationBase* create() {
            return il2cpp::create_object<app::CharacterAnimationBase>(get_class());
        }
    } // namespace CharacterAnimationBase
} // namespace app::classes::types
