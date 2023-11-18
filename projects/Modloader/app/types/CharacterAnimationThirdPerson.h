#pragma once
#include <Modloader/app/structs/CharacterAnimationThirdPerson.h>
#include <Modloader/app/structs/CharacterAnimationThirdPerson__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationThirdPerson {
        inline app::CharacterAnimationThirdPerson__Class** type_info() {
            static app::CharacterAnimationThirdPerson__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterAnimationThirdPerson__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterAnimationThirdPerson__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationThirdPerson__Class>(type_info(), "RootMotion.Demos", "CharacterAnimationThirdPerson");
        }
        inline app::CharacterAnimationThirdPerson* create() {
            return il2cpp::create_object<app::CharacterAnimationThirdPerson>(get_class());
        }
    } // namespace CharacterAnimationThirdPerson
} // namespace app::classes::types
