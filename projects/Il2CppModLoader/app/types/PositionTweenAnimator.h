#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PositionTweenAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PositionTweenAnimator__Class** type_info;
        inline app::PositionTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::PositionTweenAnimator__Class>(type_info, "Moon.Timeline", "PositionTweenAnimator");
        }
        inline app::PositionTweenAnimator* create() {
            return il2cpp::create_object<app::PositionTweenAnimator>(get_class());
        }
    } // namespace PositionTweenAnimator
} // namespace app::classes::types
