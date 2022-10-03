#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransparencyTweenAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransparencyTweenAnimator__Class** type_info;
        inline app::TransparencyTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::TransparencyTweenAnimator__Class>(type_info, "Moon.Timeline", "TransparencyTweenAnimator");
        }
        inline app::TransparencyTweenAnimator* create() {
            return il2cpp::create_object<app::TransparencyTweenAnimator>(get_class());
        }
    } // namespace TransparencyTweenAnimator
} // namespace app::classes::types
