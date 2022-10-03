#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimator_AnimatedCrossfadeInstance__Array {
        namespace {
            app::MoonAnimator_AnimatedCrossfadeInstance__Array__Class* type_info_ref = nullptr;
        }
        app::MoonAnimator_AnimatedCrossfadeInstance__Array__Class** type_info = &type_info_ref;
        inline app::MoonAnimator_AnimatedCrossfadeInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimator_AnimatedCrossfadeInstance__Array__Class>(type_info, "Moon", "MoonAnimator+AnimatedCrossfadeInstance[]");
        }
        inline app::MoonAnimator_AnimatedCrossfadeInstance__Array* create() {
            return il2cpp::create_object<app::MoonAnimator_AnimatedCrossfadeInstance__Array>(get_class());
        }
    } // namespace MoonAnimator_AnimatedCrossfadeInstance__Array
} // namespace app::classes::types
