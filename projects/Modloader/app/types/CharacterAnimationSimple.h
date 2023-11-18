#pragma once
#include <Modloader/app/structs/CharacterAnimationSimple.h>
#include <Modloader/app/structs/CharacterAnimationSimple__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationSimple {
        inline app::CharacterAnimationSimple__Class** type_info() {
            static app::CharacterAnimationSimple__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterAnimationSimple__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterAnimationSimple__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationSimple__Class>(type_info(), "RootMotion.Demos", "CharacterAnimationSimple");
        }
        inline app::CharacterAnimationSimple* create() {
            return il2cpp::create_object<app::CharacterAnimationSimple>(get_class());
        }
    } // namespace CharacterAnimationSimple
} // namespace app::classes::types
