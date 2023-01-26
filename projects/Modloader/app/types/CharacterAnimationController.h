#pragma once
#include <Modloader/app/structs/CharacterAnimationController.h>
#include <Modloader/app/structs/CharacterAnimationController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterAnimationController {
        inline app::CharacterAnimationController__Class** type_info() {
            static app::CharacterAnimationController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterAnimationController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterAnimationController__Class* get_class() {
            return il2cpp::get_class<app::CharacterAnimationController__Class>(type_info(), "", "CharacterAnimationController");
        }
        inline app::CharacterAnimationController* create() {
            return il2cpp::create_object<app::CharacterAnimationController>(get_class());
        }
    } // namespace CharacterAnimationController
} // namespace app::classes::types
