#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraShakeAnimator__Array {
        namespace {
            app::CameraShakeAnimator__Array__Class* type_info_ref = nullptr;
        }
        app::CameraShakeAnimator__Array__Class** type_info = &type_info_ref;
        inline app::CameraShakeAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeAnimator__Array__Class>(type_info, "Moon.Timeline", "CameraShakeAnimator[]");
        }
        inline app::CameraShakeAnimator__Array* create() {
            return il2cpp::create_object<app::CameraShakeAnimator__Array>(get_class());
        }
    } // namespace CameraShakeAnimator__Array
} // namespace app::classes::types
