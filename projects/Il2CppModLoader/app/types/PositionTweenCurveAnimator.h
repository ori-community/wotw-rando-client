#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PositionTweenCurveAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PositionTweenCurveAnimator__Class** type_info;
        inline app::PositionTweenCurveAnimator__Class* get_class() {
            return il2cpp::get_class<app::PositionTweenCurveAnimator__Class>(type_info, "Moon.Timeline", "PositionTweenCurveAnimator");
        }
        inline app::PositionTweenCurveAnimator* create() {
            return il2cpp::create_object<app::PositionTweenCurveAnimator>(get_class());
        }
    } // namespace PositionTweenCurveAnimator
} // namespace app::classes::types
