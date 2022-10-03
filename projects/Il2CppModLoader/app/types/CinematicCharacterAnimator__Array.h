#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CinematicCharacterAnimator__Array {
        namespace {
            app::CinematicCharacterAnimator__Array__Class* type_info_ref = nullptr;
        }
        app::CinematicCharacterAnimator__Array__Class** type_info = &type_info_ref;
        inline app::CinematicCharacterAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::CinematicCharacterAnimator__Array__Class>(type_info, "Moon.Timeline", "CinematicCharacterAnimator[]");
        }
        inline app::CinematicCharacterAnimator__Array* create() {
            return il2cpp::create_object<app::CinematicCharacterAnimator__Array>(get_class());
        }
    } // namespace CinematicCharacterAnimator__Array
} // namespace app::classes::types
