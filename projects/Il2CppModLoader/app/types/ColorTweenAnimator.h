#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorTweenAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColorTweenAnimator__Class** type_info;
        inline app::ColorTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::ColorTweenAnimator__Class>(type_info, "Moon.Timeline", "ColorTweenAnimator");
        }
        inline app::ColorTweenAnimator* create() {
            return il2cpp::create_object<app::ColorTweenAnimator>(get_class());
        }
    } // namespace ColorTweenAnimator
} // namespace app::classes::types
