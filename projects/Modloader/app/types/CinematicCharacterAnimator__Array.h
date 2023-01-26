#pragma once
#include <Modloader/app/structs/CinematicCharacterAnimator__Array.h>
#include <Modloader/app/structs/CinematicCharacterAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CinematicCharacterAnimator__Array {
        inline app::CinematicCharacterAnimator__Array__Class** type_info() {
            static app::CinematicCharacterAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CinematicCharacterAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CinematicCharacterAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::CinematicCharacterAnimator__Array__Class>(type_info(), "Moon.Timeline", "CinematicCharacterAnimator[]");
        }
        inline app::CinematicCharacterAnimator__Array* create() {
            return il2cpp::create_object<app::CinematicCharacterAnimator__Array>(get_class());
        }
    } // namespace CinematicCharacterAnimator__Array
} // namespace app::classes::types
