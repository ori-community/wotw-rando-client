#pragma once
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/CharacterAnimationSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationSystem {
        inline app::CharacterAnimationSystem__Class** type_info() {
            static app::CharacterAnimationSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterAnimationSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterAnimationSystem__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationSystem__Class>(type_info(), "", "CharacterAnimationSystem");
        }
        inline app::CharacterAnimationSystem* create() {
            return il2cpp::create_object<app::CharacterAnimationSystem>(get_class());
        }
    } // namespace CharacterAnimationSystem
} // namespace app::classes::types
