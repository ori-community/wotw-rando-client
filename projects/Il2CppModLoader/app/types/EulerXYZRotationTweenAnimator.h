#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EulerXYZRotationTweenAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EulerXYZRotationTweenAnimator__Class** type_info;
        inline app::EulerXYZRotationTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::EulerXYZRotationTweenAnimator__Class>(type_info, "Moon.Timeline", "EulerXYZRotationTweenAnimator");
        }
        inline app::EulerXYZRotationTweenAnimator* create() {
            return il2cpp::create_object<app::EulerXYZRotationTweenAnimator>(get_class());
        }
    } // namespace EulerXYZRotationTweenAnimator
} // namespace app::classes::types
