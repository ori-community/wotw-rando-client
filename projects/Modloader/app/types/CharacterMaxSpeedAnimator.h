#pragma once
#include <Modloader/app/structs/CharacterMaxSpeedAnimator.h>
#include <Modloader/app/structs/CharacterMaxSpeedAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterMaxSpeedAnimator {
        inline app::CharacterMaxSpeedAnimator__Class** type_info() {
            static app::CharacterMaxSpeedAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterMaxSpeedAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterMaxSpeedAnimator__Class* get_class() {
            return il2cpp::get_class<app::CharacterMaxSpeedAnimator__Class>(type_info(), "", "CharacterMaxSpeedAnimator");
        }
        inline app::CharacterMaxSpeedAnimator* create() {
            return il2cpp::create_object<app::CharacterMaxSpeedAnimator>(get_class());
        }
    } // namespace CharacterMaxSpeedAnimator
} // namespace app::classes::types
