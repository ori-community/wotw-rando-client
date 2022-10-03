#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CinematicCharacterAnimator {
        namespace {
            app::CinematicCharacterAnimator__Class* type_info_ref = nullptr;
        }
        app::CinematicCharacterAnimator__Class** type_info = &type_info_ref;
        inline app::CinematicCharacterAnimator__Class* get_class() {
            return il2cpp::get_class<app::CinematicCharacterAnimator__Class>(type_info, "Moon.Timeline", "CinematicCharacterAnimator");
        }
        inline app::CinematicCharacterAnimator* create() {
            return il2cpp::create_object<app::CinematicCharacterAnimator>(get_class());
        }
        inline app::CinematicCharacterAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::CinematicCharacterAnimator__Array>(get_class(), size);
        }
    } // namespace CinematicCharacterAnimator
} // namespace app::classes::types
